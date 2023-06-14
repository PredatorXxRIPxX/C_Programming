#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct bidirectionnelle{
    struct bidirectionnelle *left;
    struct bidirectionnelle *center;
    struct bidirectionnelle *right;
};

void supprimasstion(struct bidirectionnelle *tete,struct bidirectionnelle *ptr){
    while (tete!=NULL)
    {
        if (tete->center==ptr)
        {
            tete->center=ptr->center;
            tete->right=ptr->right;
            free(ptr);
        }
        tete=tete->center;
    }
    
}

void insertion_en_tete(struct bidirectionnelle *tete){
    struct bidirectionnelle *new=malloc(sizeof(struct bidirectionnelle));
    new->center=tete->left;
    tete->right=new->left;
    new->right=NULL;
    tete=new;
}

void insertion_en_queue(struct bidirectionnelle *queue){
    struct bidirectionnelle*new=malloc(sizeof(struct bidirectionnelle));
    new->center=NULL;
    new->right=queue->left;
    queue->center=new->left;
    queue=new;
}
