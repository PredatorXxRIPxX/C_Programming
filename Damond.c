#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int i,j,k,space,n;
    printf("________Welcome to diamond company_______\n");
    printf("by Predator XxRIPxX \n");
    printf("we recommended you to give me the number of rows so i cand draw you a diamond: ");
    scanf("%i",&n);
    space=n;
    for (size_t i = 1; i <= n; i++)
    {

        for (size_t j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (size_t k = 1; k <= i; k++)
        {
               
            printf("+ ");
        }  
        printf("\n");
        space--;   
    }
    space=0;
    for (size_t i = n; i >= 1; i--)
    {
        for (size_t j = 0; j <= space; j++)
        {
            printf(" ");
        }
        for (size_t k = 1; k <= i; k++)
        {
            printf("+ ");
        }
        printf("\n");
        space++;
        
        
    }
    printf("thanks for your trust ");
    
    return 0;
}