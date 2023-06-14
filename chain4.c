#include<stdio.h>
#include<string.h>
int main()
{
    char c1[10],c2[10];
    int f[9],i,j,l=0;
    printf("please give us a script: ");
    gets(c1);
    strcpy(c2,c1);
    for (size_t i = 0; i < strlen(c1); i++)
    {
        for (size_t j = 0; j < strlen(c2); j++)
        {
            f[i]=0;
            if (c1[i]==c2[j])
            {
                f[i]=f[i]+1;
            }
            
        }
        
    }
    int max=f[0];
    for (size_t i = 1; i < strlen(c1); i++)
    {
        if (f[i]>max)
        {
            max=f[i];
        }
        
    }
    printf("%c",c1[max]);

    return 0;
}