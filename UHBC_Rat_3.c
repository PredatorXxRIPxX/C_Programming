#include<stdio.h>
#include<stdlib.h>

struct list{
    int val;
    struct list *next;
};

void supprision_element(struct list*tete){
    while (tete!=tete->next)
    {
        tete=tete->next;
    }
    struct list *tmp =tete->next;
    tete->next=NULL;
    free(tmp);
    
}