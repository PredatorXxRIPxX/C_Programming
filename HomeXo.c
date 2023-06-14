#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main ()
{
    int r, n,s,j,i,max,min,m,a,b,mod,division,c,k,p,q,X,e;
    printf("welcome to my application here we can solve so many problems \n");
    printf("please give as a number so we can know how we can help you: ");
    scanf("%i",&e);
    if (e==1)
    {
        printf("give us a number please: ");
    scanf("%i",&n);
    s==0;
    for (size_t i = 1; i <= n; i++)
    {
        s=s+i;
        printf("%i+",i);
    }
    printf("=%i",s);
    }
    
    if (e==2)
    {
        printf("please give us 10 numbers and we do the rest of the job \n");
        scanf("%i",&max);
        scanf("%i",&min);
        for (size_t i = 0; i <= 8; i++)
        {
            scanf("%i",&n);
            if (n>max)
            {
                max=n;
            }
            if (n<min)
            {
                min=n;
            }
            
            


        }
        
        


        printf(" the max is %i the min is %i",max,min);
    }
    
    
    
    printf("\n");
    if (e==3)
    {
            printf("give as your number a");
    scanf("%i",&a);
    printf("give us your second number b");
    scanf("%i",&b);
    mod=a%b;
    while (a>=b)
    {
        a=a-b;
    }
    division==a;
    printf("the result is %i the rest of it is %i ",division,mod);
    printf("\n");
   
    }
    if (e==4)
    {
         printf("give us a number that you want multiplie it \n");
    scanf("%i",&c);
    printf("give us the number of multiplication");
    scanf("%i",&k);
    j==0;
    for (size_t i = 0; i <= k; i++)
    {
        j=c+j;
    }
    printf("the  results is %i ",j);
    }
    if (e==5)
    {
        printf("give us 2 numbers q and p");
    scanf("%.2i",&p,&q);
    if ((a%p)==0)
    {
        printf("they can be divided");
    }else
    {
        printf("they can't be divided");
    }
    }
    if (e==6)
    {
          printf("please give us a number X");
    scanf("%i",&X);
    printf("the number who can divide X  are :");
    for (size_t i = 0; i <= X; i++)
    {
        if ( X % i==0)
        {
            printf("%i ",i);

        }
        
    }
    }
    if (e==7)
    {
         printf("please give us a number: ");
    scanf("%i",&n);
    i==1;
    for (size_t i = 2; i < n; i++)
    {
        if ((n%i)!=0)
        {
            printf("it is a primers number");
        }else
        {
            printf("is not a primers number");
        }
        
        
    }
    }
    if (e==8)
    {
           printf("give as a number calculate the addition of numbers of a number \n");
    scanf("%i",&n);
    s==0;
    do
    {
        s=n/10;
        s=s+1;
    } while (n/10!=0);
    printf("your result is: %i",s);
    }

return 0;
}