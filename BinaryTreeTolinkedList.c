#include<stdio.h>
#include<stdlib.h>

struct arbre{
    int x;
    struct arbre *gauche;
    struct arbre *droite;
};

struct arbre* create_new_node(int x){
    struct arbre*ptr=malloc(sizeof(struct arbre));
    ptr->x=x;
    ptr->droite=NULL;
    ptr->gauche=NULL;
    return ptr;
}


struct arbre *insertion(int x,struct arbre *root){
    if (root==NULL)
    {
        root=create_new_node(x);
    }
    if (x<root->x)
    {
        root->gauche=insertion(x,root->gauche);
    }
    if (x>root->x)
    {
        root->droite=insertion(x,root->droite);
    }
    
    return root;
    
}

void infixe(struct arbre *root){
    if (root==NULL)
    {
        printf("end of tree");
    }
    
    infixe(root->gauche);
    printf("%i\t",root->x);
    infixe(root->droite);
    
}


int main(){ 
    struct arbre *ptr=NULL;
    
    ptr=insertion(4,ptr);
    ptr=insertion(1,ptr);
    ptr=insertion(2,ptr);
    ptr=insertion(3,ptr);
    ptr=insertion(5,ptr);

    infixe(ptr);
    printf("%i",ptr->x);
    printf("%i",ptr->gauche->x);
}