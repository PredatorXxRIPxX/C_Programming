#include<stdio.h>
void tennum(int n)
{ 
    int i=1;
    for (size_t i = n+1; i <= n+10; i++)
    {
        printf("%i  ",i);
    }
    
    

    
}
int main()
{
    printf("give a num n: ");
    int n;
    scanf("%i",&n);
    tennum(n);
}