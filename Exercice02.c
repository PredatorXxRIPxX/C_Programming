#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;
    for (size_t i = 0; i <= 4; i++)
    {
        printf("give the number%i: ",i+1);
        scanf("%i",&a[i]);
    }
    i=4;
    printf("\n");
    for (size_t j = 0; j <= 4; j++)
    {
        b[j]=a[i-j];
        printf("%i",b[j]);
    }
    return 0;
}