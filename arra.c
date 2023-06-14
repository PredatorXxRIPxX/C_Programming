#include<stdio.h>
int main()
{
    int a[10],i;
    for (size_t i = 0; i < 10; i++)
    {
        printf("give us the number %i: ",i);
        scanf("%i",&a[i]);

    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%i",a[i]);
    }
    return 0;
    
    

}