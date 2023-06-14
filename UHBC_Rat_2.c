#include<stdio.h>
#include<stdlib.h>

struct arbre{
    int val ;
    struct arbre*g;
    struct arbre*d;
};

struct arbre *getnewnode(int val){
    struct arbre *tmp=malloc(sizeof(struct arbre));
    tmp->val=val;
    tmp->d=NULL;
    tmp->g=NULL;
    return tmp;
}

struct arbre *insert_node(struct arbre *racine,int val){
    if (racine==NULL)
    {
        racine=getnewnode(val);
    }
    if (val<=racine)
    {
        racine->g=insert_node(racine->g,val);
    }else
    {
        racine->d=insert_node(racine->d,val);
    }
    
}

int parcour(struct arbre *racine,int min){
    if (racine==NULL)
    {
        return;
    }
    parcour(racine->g,min);
    if (racine->val<min)
    {
        min=racine->val;
    }
    parcour(racine->d,min);
    return min;
}

int main(){
    struct arbre *racine;
    int min=racine->val;
    int min=parcour(racine,min);
    printf("le min est %i",min);
}
