#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct etudiant{
    char Num_Ins[10];
    char Nom[10];
    char Prénom[10];
    char Sexe;
    float Note_TD ;
    float Note_TP ;
    float Note_Examen ;
    float Moy ;
    char Catégorie;
    struct etudiant *suivant;
};

struct etudiant *tete=NULL;

void insertion(char Num_ins[10],char Nom[10],char prenom[10],char sexe,float note_td,float note_tp,float note_examen,float moy,float categorie){

    struct etudiant *nv=malloc(sizeof(struct etudiant));
    nv->Num_Ins=Num_ins;
    nv->Catégorie=categorie;
    nv->Nom=Nom;
    nv->Note_Examen=note_examen;
    nv->Moy=moy;
    nv->Note_TP=note_tp;
    nv->Note_TD=note_td;
    nv->Prénom=prenom;
    nv->Sexe=sexe;
    nv->suivant=tete;
    tete=nv;

}

void supprision_premier_etudiant(){
    if (tete==NULL)
    {
        printf("il n'ya pas d'etudiant inscrit");
        exit(EXIT_FAILURE);
    }
    
    struct etudiant *ptr=tete;
    tete=tete->suivant;
    free(ptr);
}

int recherche_etudiant(char nom[10],char prenom[10]){
    if (tete==NULL)
    {
        printf("etudiant pas trouver");
        return 0;
    }
    if (tete->Nom==nom&&tete->Prénom==prenom)
    {
        printf("etudiant trouver");
        return 1;
    }
    
    
}


void affichage_list_etud(struct etudiant *tete){
    if (tete==NULL)
    {
        printf("il n'ya pas d'etudiant");
        exit(EXIT_FAILURE);
    }
    float laplusmovaise,laplusbonne;
    laplusmovaise=tete->Moy;
    laplusbonne=tete->suivant->Moy;

    if (laplusbonne<laplusmovaise)
    {
        float tmp=laplusbonne;
        laplusbonne=laplusmovaise;
        laplusmovaise=tmp;
    }
    int moyentotal=0;
    
    int nbr_etud=0;
    while (tete!=NULL)
    {
        nbr_etud++;
        printf("%s\t%s\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",tete->Num_Ins,tete->Nom,tete->Prénom,tete->Sexe,tete->Note_Examen,tete->Note_TD,tete->Note_TP,tete->Moy);
        if (tete->Moy>laplusbonne)
        {
            laplusbonne=tete->Moy;
        }
        if (tete->Moy<laplusmovaise)
        {
            laplusmovaise=tete->Moy;
        }
        moyentotal=moyentotal+tete->Moy;
        if (tete->Moy>=10)
        {
            printf("admis");
        }else
        {
            printf("ajourné");
        };
        tete=tete->suivant;
        
        
        
    }
    printf("le nombre total est %i la plus movaise %i la plus bonne %i la moyenne general %.2f",nbr_etud,laplusmovaise,laplusbonne,moyentotal/nbr_etud);
    
}

