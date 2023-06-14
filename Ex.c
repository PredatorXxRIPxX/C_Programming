#include<stdlib.h>
#include<stdio.h>
int main()
{
    int x,y,c,l,i,j;int n[20][20];
    do
    {
        printf("please give me a number of align bigger than 0 and smaller or equal 20: ");
        scanf("%d",&l);
        printf("please give us a number if colones bigger than 0 and smaller or equal 20: ");
        scanf("%d",&c);
    } while (((c=0)||(c>20))&&((l=0)||(l>20)));
    printf("please give us the coordination x and y\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if (((x<=c)&&(x>0))&&((y<=l)&&(y>0)))
    {
        printf("this point exists in the tab");
        for (size_t i = 0; i <= l; i++)
        {
            for (size_t j = 0; j <= c; j++)
            {
                printf("%d",n[i][j]);
            }
            
        }
        
    }else
    {
        printf("it don't exist in the tab");
    }
    return 0;

    
    
 
}