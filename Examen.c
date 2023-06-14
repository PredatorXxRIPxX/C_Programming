#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float s,o2,h2,sh2,so2;
    printf("donner votre nombre o2 et h2");
    scanf("%f%f",&o2,&h2);
    sh2=(10*o2)/100;
    so2=(20*h2)/100;
    s=0;
    while ((h2)*(o2)!=0)
    {
       s=s+0.001;
       o2=o2-so2;
       h2=h2-sh2;

    }
    printf("your result is %f seconds",s);
    return 0;
    

}