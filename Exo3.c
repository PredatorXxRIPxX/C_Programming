#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create_list(int n)
{
struct node *head1,*head2,*ptr,*tmp;
head1=malloc(sizeof(struct node));
printf("enter your value: ");
int num;
scanf("%d",&num);
head1->data=num;
head1->next=NULL;
ptr=head1;
for (size_t i = 1; i < n; i++)
{
    tmp=malloc(sizeof(struct node));
    printf("please enter a value: ");
    scanf("%d",&num);
    tmp->data=num;
    tmp->next=NULL;
    ptr->next=tmp;
    ptr=tmp;
}
head2=malloc(sizeof(struct node));
printf("enter your value: ");
scanf("%d",&num);
head2->data=num;
head2->next=NULL;
ptr=head2;
for (size_t i = 1; i < n; i++)
{
    tmp=malloc(sizeof(struct node));
    printf("please enter a value: ");
    scanf("%d",&num);
    tmp->data=num;
    tmp->next=NULL;
    ptr->next=tmp;
    ptr=tmp;
}
ptr->next=head1;
ptr=head2;
while (ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
printf("thinks for using");
}
int main()
{
    int n;
    printf("how many nodes do you want to creat?\n");
    scanf("%d",&n);
    create_list(n);
}