#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
};
void exo_5(int n)
{
    struct node *head,*tmp,*ptr;
    printf("give a value ");
    head=malloc(sizeof(struct node));
    scanf("%i",&head->value);
    head->link=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        printf("give a value ");
        tmp=malloc(sizeof(struct node));
        scanf("%i",&tmp->value);
        tmp->link=NULL;
        ptr->link=tmp;
        ptr=tmp;
    }
    ptr=head;
    printf("wich one you want to delete");
    int d;
    scanf("%i",&d);
    if(d==1)
    {
        struct node *deleter;
        deleter=head;
        head=head->link;
        free(deleter);
    }
    if (d==n)
    {
        ptr=head;
        free(tmp);
    }
    if (d>1 && d<n)
    {
        ptr=head;
        struct node *deleter;
        for (size_t i = 0; i < d-1; i++)
        {
            ptr=ptr->link;
        }
        deleter=ptr->link;
        ptr->link=ptr->link->link;
        free(deleter);    
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf(" %i\t",ptr->value);
        ptr=ptr->link;
    }    
}
int main()
{
    printf("how many nodes do you need? :");
    int n;
    scanf("%i",&n);
    exo_5(n);
    return 0;
}