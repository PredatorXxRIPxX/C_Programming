#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int m,s,c,l,i,j,n[5][3];
   
    for (size_t i = 0; i < 4; i++)
    {
        m==0;
        s==0;
        for (size_t j= 0; j < 2; j++)
        {
            printf("donner la note de l'éleve %d\n",i);
            scanf("%d",& n[i][j]);
            s==s+n[i][j];
        }
        m==s/j;
        printf("la moyenne est %d",m);
        
    }
    return 0;
    
    
}