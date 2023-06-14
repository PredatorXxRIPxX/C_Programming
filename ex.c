#include<stdio.h>
int main()
{
    int i ,j ,n ;
    printf("give us n ;");
    scanf("%i",&n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j= 0; j < i; j++)
        {
            printf("%i",i);
        }
        printf("\n");
        
    }


    

    
return 0;
}