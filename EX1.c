#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    char t[10];
    struct node *link;
};
void creat_nodes(n)
{
    struct node *ptr,*head,*tmp;
    printf("please give your first script: ");
    char s[10];
    gets(s);
    head=malloc(sizeof(struct node));
    strcpy(head->t,s);
    head->link=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        printf("please give a script: ");
        gets(s);
        tmp=malloc(sizeof(struct node));
        strcpy(tmp->t,s);
        tmp->link=NULL;
        ptr->link=tmp;
        ptr=tmp;
    }
    char j[10];
    printf("please give the script that you want to add to the second position: ");
    gets(j);
    struct node *new;
    new=malloc(sizeof(struct node));
    strcpy(new->t,j);
    new->link=NULL;
    ptr=head->link;
    new->link=ptr;
    head->link=new;


}
int main()
{
    printf("How many nodes do you needs: ");
    int n;
    scanf("%i",&n);
}