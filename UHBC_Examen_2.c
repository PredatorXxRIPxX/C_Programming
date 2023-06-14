#include<stdlib.h>
#include<stdio.h>

struct list{
    int val;
    struct list *next;
};

void affichage_list(struct list *tete){
    int nbr_list;
    int t[10];
    int i=0;
    int j=0;
    struct list * ptr=tete;
    //preparer les list par les index
    while (ptr!=NULL)
    {
        if (ptr->val<=ptr->next->val)
        {
            i++;
            ptr=ptr->next;
        }else
        {
            nbr_list++;
            t[j]=i;
            i++;
            j++;
        }
        
    }
    printf("le nombre de suite croissant est %i",nbr_list);
    //afficher les list 
    int s=0;
    for (size_t s = 0; s < 10; s++)
    {
        printf("\nla list %i\n",s+1);
        for (int a = t[j]; a < t[j+1]-1; a++)
        {
            printf("%i\t",tete->val);
            tete=tete->next;
        }

        
    }
    //recherche la plus longue suit
    int max=t[j+1]-t[j];
    for (size_t s = 3; s < 9; s++)
    {
        if (max<t[s+1]-t[s])
        {
            max=t[s-1]-t[s];
        }
        
    }
    printf("la plus longue suite est: %i",max);
    
    
    
}