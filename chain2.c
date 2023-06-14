#include<stdio.h>
#include<string.h>
int main()
{
    char c1[10],c2[10];
    printf("give your first script: ");
    gets(c1);
    printf("give your second script: ");
    gets(c2);
    int l=0;
    if (strlen(c1)!=strlen(c2))
    {
        printf("you can't");
    }else
    {
        for (size_t i = 0;i<strlen(c1); i++)
        {
           if (c1[i]!=c2[i])
           {
               l=l+1;
           }
           
            
            
        }
        printf("%i",l);
        
    }
    
    
}