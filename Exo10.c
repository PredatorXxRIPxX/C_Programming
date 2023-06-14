#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("donner deux valeur a et b: ");
    scanf("%i%i",&a,&b);
    division(a,b);
    return 0;
}
division(int a,int b)
{
    int na,c=0 ;
    na=a;
    while (a>=b)
    {
        a=a-b;
        c++;
    }
    printf("%i = %i *%i+%i",na,b,c,a);
}
