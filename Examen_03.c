#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int s,n,i;
    printf("give as a number ");
    scanf("%i",&n);
    s=0;
    for (size_t i = 0; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%i +",i);
            s==s+i;
        }
        
    }
    printf("your results is = %i",s);
    return 0;
    
}