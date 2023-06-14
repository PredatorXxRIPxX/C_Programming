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
}