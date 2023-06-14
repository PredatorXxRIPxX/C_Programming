#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y,c,l,d;
    do
    {
        printf("please give as the  dimensions of your space:  ");
    scanf("%i",&c);
    scanf("%i",&l);
    } while ((c<=0)||(l<=0));
    
    
        printf("please give us the coordination x and y: ");
    scanf("%i",&x);
    scanf("%i",&y);

    if (((y>=0)&&(y<=l))&&((x>=0)&&(x<=c)))
    {
        printf("this point is in the table\n");
        printf("give us the number d so we can change the coordination: \t");
        scanf("%i",&d);
        if (d=0)
        {
            
            printf("your x is %i your y is %i",x,y);

        }else if (d=1)
        {
            x=x-1;
            printf("your x is %i your y is %i",x,y);
        }else if (d=2)
        {
            x=x+1;
            printf("your x is %i your y is %i",x,y);
        }else if (d=3)
        {
            y=y+1;
            printf("your x is %i your y is %i",x,y);
        }else if (d=4)
        {
            y=y-1;
            printf("your x is %i your y is %i",x,y);

        }
        if ((x>c)||(x<=0)||(y>l)||(y<=0))
        {
            printf("your new coordination were placed outside your space ");
        }
        
        
        
        
        
        
    }else
    {
        printf("this point isn't in the table");
    }
    return 0;
    
    
    
}   
