#include<stdio.h>
void square(int n)
{
    int space=n ;
    for (size_t i = 0; i < n; i++)
    {
        printf("+ ");
    }
    printf("\n");
    for (size_t i = 0; i < n-2; i++)
    {
        printf("+");
        for (size_t j = 0; j< space; j++)
        {
            printf("  ");
        }
        printf("+");
        printf("\n");
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("+ ");
    }   
}
int main()
{
    int n;
    printf("give your n: ");
    scanf("%i",&n);
    square(n);
}