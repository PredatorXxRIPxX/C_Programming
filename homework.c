#include<stdio.h>
#include<string.h>
int main()
{
    char c,ch[60],dh[60];
    printf("give a char: ");
    scanf("%[^\n]%*c",&c);
    printf("give a word: ");
    scanf("%[^\n]%*c", ch);
    printf("give a sentence: ");
    scanf("%[^\n]%*c",dh);
    printf("\n");
    printf("\n");
    printf("%c",c);
    printf("\n");
    printf("%s",ch);
    printf("\n");
    puts(dh);
}