#include<stdio.h>
#include<stdlib.h>

struct arbre{
    int data;
    struct arbre *droit;
    struct arbre *gauch;
};

int pair=0;
int impaire=0;

void nbrpaireestimpaire(struct arbre*racine){
    if (racine==NULL)
    {
        printf("votre arbre est terminer");
    }
    if (racine->data%2==0)
    {
        pair++;
    }else
    {
        impaire++;
    }
    while (racine!=NULL)
    {
        nbrpaireestimpaire(racine->gauch);
        nbrpaireestimpaire(racine->droit);
    } 
}