#include<stdio.h>
#include<stdlib.h>

struct file{
    int data;
    struct file*next;
};

struct file*top=NULL;
struct file*bottom=NULL;

void plusgrandpluspetit(){
    int min,max;
    min=difiler();
    max=difiler();
    int tmp;
    if (min>max)
    {
        tmp=max;
        max=min;
        min=max;
    }
    while(top!=NULL){
        tmp=difiler();
        if (tmp>max)
        {
            max=tmp;
        }else if (tmp<min)
        {
            min=tmp;
        }
    }   
}

void enfiler(){
    struct file*ptr=malloc(sizeof(struct file));
    printf("donner une valeur: ");
    scanf("%i",&ptr->data);
    if (top==NULL&&bottom==NULL)
    {
        top=ptr;
        bottom=ptr;
        return;
    }
    bottom->next=ptr;
    bottom=ptr;
}
int difiler(){
    int value;
    struct file*ptr=top;
    top=top->next;
    value=ptr->data;
    free(ptr);
    return value;
}