#include<stdio.h>
void max(int*p,int*q)
{
    if (*p>*q)
    {
        printf("le max est:%i",*p);
    }else
    {
        printf("les max et:%i",*q);
    }
    
    

}
int main()
{
    int a,b;
    printf("donner vos valeur a et b: ");
    scanf("%i%i",&a,&b);
    max( &a, &b);
}