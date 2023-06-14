#include<stdio.h>
#include<stdbool.h>
bool perfect(int n)
{
    int i;
    int l=0;
    for (size_t i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            l=l+i;  
        }   
    }
    if (l==n)
    {
        return 1;
    }
    else
    {
        for (size_t i = 1; i < 10000; i++)
        {
            if (10000%i==0)
            {
                printf("%i |  ",i);
            }
            
        }
        
    }
    
}
int main()
{
    int n;
    printf("give a num: ");
    scanf("%i",&n);
    printf("%i",perfect(n));   
}