#include<stdio.h>
#include<stdlib.h>
struct doublenodes
{
    struct doublenodes *prev;
    int data;
    struct doublenodes *next;
};
void creationdouble(int n)
{
    struct doublenodes *ptr,*tmp,*head;
    head=malloc(sizeof(struct doublenodes));
    printf("enter a data \n ");
    scanf("%i",&head->data);
    head->prev=NULL;
    head->next=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        tmp=malloc(sizeof(struct doublenodes));
        printf("please give a value: ");
        scanf("%i",&tmp->data);
        tmp->prev=ptr;
        tmp->next=NULL;
        ptr->next=tmp;
        ptr=tmp;
    }
    ptr=head;
    printf("this is from the left to right\n");
    while (ptr!=NULL)
    {
        printf("%i",ptr->data);
        ptr=ptr->next;
    }
    ptr=tmp;
    printf("\nthis is from the right to left\n");
    while (ptr!=NULL)
    {
        printf("%i",ptr->data);
        ptr=ptr->prev;
    }   
    printf("give as the data that you want to add at the end\n");
    struct doublenodes *end;
    end=malloc(sizeof(struct doublenodes));
    scanf("%i",&end->data);
    end->prev=tmp;
    end->next=NULL;
    tmp->next=end;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%i",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
    printf("how many nodes do you wants ?\n");
    int n;
    scanf("%d",&n);
    creationdouble(n);
    return 0;
}