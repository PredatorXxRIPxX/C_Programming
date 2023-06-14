#include<stdio.h>
int main()
{
    int x,y,i,k,l,s;
   printf("please give me a number x and y\n");
   scanf("%i",&x);
   scanf("%i",&y);
   l=0;
   k=0;
   s=0;
   do
   {
       if (x % 2 != 0)
       {
           k=k+l;
           
           
       }

       
       x=x/2;
       l=l+1;
   } while (x / 2 != 1);
   printf("your result is",s);
   
    return 0;
 
    
    
}