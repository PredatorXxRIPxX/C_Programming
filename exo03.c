#include<stdio.h>
int main()
{
    int a[6],sum,i;
    sum=0;
    for (size_t i = 0; i <= 5; i++)
    {
        printf("please give me the number %i: ",i+1);
        scanf("%i",&a[i]);
    }
    for (size_t i = 0; i <= 5; i++)
    {
        sum=a[i]+sum;
    }
    printf("%i",sum);
    return 0;   
}