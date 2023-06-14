#include<stdio.h>
#include<stdlib.h>

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
int nbrfeuille=0;
void nbrfils(struct arbre*racine){
    if (racine==NULL)
    {
        nbrfeuille++;
    }
    nbrfils(racine->droit);
    nbrfils(racine->gauche);
}