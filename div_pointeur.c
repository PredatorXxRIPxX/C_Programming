#include<stdio.h>
int main()
{
    int a,i;
    int *p=&a;
    printf("give us a number please: ");
    scanf("%i",&a);
    for (size_t i = 1; i <= *p; i++)
    {
        if (*p%i==0)
        {
            printf("%i |",i);
        }
        
    }
    
}