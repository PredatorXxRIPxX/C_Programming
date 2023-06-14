#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
    struct node *back;
};


struct node *d=NULL;
struct node *f=NULL;

struct node *insertion_debut(struct node*d){
    struct node *tmp=malloc(sizeof(struct node));
    printf("donner une valeur: ");
    scanf("%i",&tmp->val);
    tmp->next=d;
    d->back=tmp;
    d=tmp;
    tmp->back=NULL;
    return d;
}

struct node *ajouter_fin(struct node *f){
    struct node*tmp=malloc(sizeof(struct node));
    printf("donner une valeur");
    scanf("%i",&tmp->val);
    f->next=tmp;
    tmp->back=f;
    tmp->next=NULL;
    f=tmp;
    return f;
}

struct node *supprision_fin_list(struct node *f){
    struct node*ptr=f;
    f=f->back;
    f->next=NULL;
    free(ptr);
    return f;
}

int counter(struct node *d){
    int count=0;
    while (d!=NULL)
    {
        count++;
        d=d->next;
    }
    return count;

}

struct node *inverse_ordre(struct node *debut,struct node*fin){
    struct node *ptr=debut;
    int count=counter(debut);
    
    for (size_t i = 0; i < count; i++)
    {
        struct node *tmp=fin;
        fin=fin->back;
        fin->next=NULL;
        tmp->back=ptr;
        tmp->next=ptr->next;
        ptr->next->back=tmp;
        ptr->next=tmp;
        ptr=tmp;
    }
    ptr=d;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    fin=ptr->next;
    return d;
    
}

struct arbre{
    int val;
    struct arbre *droit;
    struct arbre *gauche;
};

void affichage_dec(struct arbre *racine){
    if (racine!=NULL)
    {
        affichage_dec(racine->droit);
        printf("%i",racine->val);
        affichage_dec(racine->gauche);
    }
    
}
int nbrfils(struct arbre*racine){
    if (racine==NULL)
    {
        return 0;
    }

    if (racine->droit==NULL&&racine->gauche==NULL)
    {
        return 1;
    }

    return nbrfils(racine->droit)+nbrfils(racine->gauche);
}



struct node *l1=NULL;
struct node *l2=NULL;

void remplir_list(){
    
};
