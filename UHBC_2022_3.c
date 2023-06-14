#include<stdio.h>
#include<stdlib.h>

struct arbre{
    int val;
    struct arbre *gauche;
    struct arbre *droite;
    
};

void affichage_feuille(struct arbre *racine){
    if (racine==NULL)
    {
        return;
    }
    affichage_feuille(racine->gauche);
    if (racine->gauche&&racine->droite==NULL)
    {
        printf("%i",racine->val);
    }
    affichage_feuille(racine->droite);
}

int hauteur_gauche(struct arbre *racine){
    
    if (racine!=NULL)
    {
        return 1+hauteur_gauche(racine->gauche);
        
    }
    
    
}
int hauteur_droite(struct arbre *racine){
    
    if (racine!=NULL)
    {
        return 1+hauteur_droite(racine->droite);
        
    }
    
    
}
int hauteur_total(struct arbre *racine){
    int a;
    if (hauteur_droite(racine)>hauteur_gauche(racine))
    {
        a=hauteur_droite(racine)+1;
    }else
    {
        a=hauteur_gauche(racine)+1;
    }
    
    return a;
}

struct arbre* arbrecomplet(int t[],struct arbre*racine,int min,int max){
    if (min<max)
    {
        int milieu=(min+max)/2;
        insertnode(t[milieu],racine);
        racine->gauche=arbrecomplet(t,racine->gauche,min,milieu-1);
        racine->droite=arbrecomplet(t,racine->droite,milieu+1,max);
    }
}

int main(){
    int t[10];
    for (size_t i = 0; i < 10; i++)
    {
        t[i]=rand()%10000;
    }
    int taille=10;
    struct arbre *racine;
    arbrecomplete(t,racine,0,taille);
    
}