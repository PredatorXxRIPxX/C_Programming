#include<stdio.h>
#include<math.h>
float perameter_cercle(float n)
{
    return 2*3.14*n;
}
float air_cercle(float r)
{
    return pow(r,2)*3.14;
}
int main()
{
    printf("give us the r: ");
    float r;
    scanf("%f",&r);
    printf("%f \n",perameter_cercle(r));
    printf("%f",air_cercle( r));

    
}