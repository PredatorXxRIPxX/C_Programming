#include<stdio.h>
int inf();
int inf(int n)
{
    if (n>20)
    {
        printf("to big");
        scanf("%i",&n);
        return  inf(n);
    } 
    if (n<10)
    {
        printf("to little");
        scanf("%i",&n);
        return inf(n);
    }
    if ((n<=20)&&(n>10))
    {
     printf("exactly");
    }
    
    
    
}
int main()
{
    int n;
    printf("give a number n; ");
    scanf("%i",&n);
    inf((n));
}