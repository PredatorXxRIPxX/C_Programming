#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n[7],l;
    char v;
    
    for (size_t i = 0; i <= 6; i++)
    {
        printf("please give as the number %i:",i+1);
      scanf("%i",&n[i]);

    }
    l=0;
    for (size_t i = 6; i >= 1; i--)
    {
        if(n[i]<=n[i-1])
        {
            l=l+1;
        }

    }
    if(l==7)
    {
        printf("true");
    }else
    {
        printf("false");
    }
    return 0;

   
}