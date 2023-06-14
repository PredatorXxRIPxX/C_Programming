#include<stdio.h>
void change(int *p,int*q)
{
    int c,d;
    c=*p;
    *p=*q;
    *q=c;
    printf("%i|%i",*p,*q);
}
int main()
{
    int a,b;
    printf("give the value of a and b: ");
    scanf("%i%i",&a,&b);
    if (((a&&b)<0) || ((a&&b)>=0))
    {
        change(&a,&b);
    }
}