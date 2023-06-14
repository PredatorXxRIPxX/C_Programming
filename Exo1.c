#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c,max;
    printf("please give as 3 number");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    max=a;
    if (max<=c)
    {
        max=c;
    }
    if (max<=b)
    {
        max=b;
    }
    printf("the max is :%i",max);
    
    
}