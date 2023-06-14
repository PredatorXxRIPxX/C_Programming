#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node*next;
};

bool paireounon(int data){
    if (data==0)
    {
        return true;
    }else
    {
        return false;
    }
}

struct node*dernier=NULL;

void affichervotrenombrebinaire(struct node*tete){
    if (tete!=NULL)
    {
        printf("%i",tete->data);
        affichervotrenombrebinaire(tete->next);
    }
    
}

void decimal_a_binaire(int n){
    do
    {
        struct node*nouveau=malloc(sizeof(struct node));
        nouveau->data=n%2;
        n=n/2;
        nouveau->next=dernier;
        dernier=nouveau;
    }while(n!=0);
    affichervotrenombrebinaire(dernier);
    while (dernier!=NULL)
    {
        dernier=dernier->next;
    }
    
    int answer=paireounon(dernier->data);  
    if (answer==1)
    {
        printf("il est paire");
    }else
    {
        printf("il est impaire");
    }
}
int main(){
    decimal_a_binaire(44);
}