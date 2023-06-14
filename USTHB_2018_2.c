#include<stdio.h>
#include<stdlib.h>


void a21(int a){
        printf("%i\t",a);
        a31(a);
}
void a31(int a){
        printf("%i\t",a);
        a21(a);
}

int main(){
    printf("donner votre nombre n: ");
    int n;
    scanf("%i",&n);
    printf("donner votre nombre a: ");
    int a;
    scanf("%i",&a);
    printf("%i\t",a);
    n--;
    while (n!=0)
    {
        a21(a*2+1);
        a31(a*3+1);
        n--;
    }
}