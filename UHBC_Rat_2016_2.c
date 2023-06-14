#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct arbre{
    int val;
    struct arbre *right;
    struct arbre *left;
};

bool answer1=true;

bool equation(struct arbre *racine1,struct arbre *racine2){
    if (racine1==NULL||racine2==NULL)
    {
        return;
    }
    if (racine1->val!=racine2->val)
    {
        answer1=false;
    }
    equation(racine1->left,racine2->left);
    equation(racine1->right,racine2->right);
    
}
int main(){
    struct arbre *racine1,*racine2;
    equation(racine1,racine2);
    if (answer1==true)
    {
        printf("il sont egaux");
    }else
    {
        printf("il sont egaux");
    }
    
}