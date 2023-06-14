#include<stdio.h>
#include<stdlib.h>

struct file{
    int val;
    struct file *next;
};

struct file *rear=NULL;
struct file *front=NULL;

void enfiler(struct file *s,int valeur){
    struct file *tmp=malloc(sizeof(struct file));
    tmp->val=valeur;
    tmp->next=NULL;
    if (rear==NULL&&front==NULL)
    {
        rear=tmp;
        front=tmp;
        return ;
    }
    rear->next=tmp;
    rear=tmp;
}

void difiler(struct file *s){

    if (s==NULL)
    {
        printf("votre file est vide");
        return;
    }

    struct file*tmp;
    s=s->next;
    free(tmp);
}

void placer_paire_impaire(struct file*f1,struct file*f2,struct file*f3){
    while (f1!=NULL)
    {
        if (f1->val%2==0)
        {
            enfiler(f2,f1->val);
            difiler(f1);
        }else
        {
            enfiler(f3,f1->val);
            difiler(f1);
        }
        
        
    }
    
}

void placer(struct file*f1,struct file *f2,struct file*f3){

    while (f1!=NULL)
    {
        if (f1->val%2==0)
        {
            enfiler(f2,f1->val);
            difiler(f1);
        }else
        {
            enfiler(f3,f1->val);
            difiler(f1);
        }
        
        
    }
    while (f3!=NULL)
    {
        enfiler(f2,f3->val);
        difiler(f3);
    }
    
}
