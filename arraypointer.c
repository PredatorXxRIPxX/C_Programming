#include<stdio.h>
int main()
{
    int a[6],i,s;
    for (size_t i = 0; i < 6; i++)
    {
        printf("please give as the number%i: ",i);
        scanf("%i",&a[i]);
    }
    s=0;
    int *p;
    p=a;
    for (size_t i = 0; i < 6; i++)
    {
        s=s+*(p+i);
    }
    printf("%i",s);
    
    
}