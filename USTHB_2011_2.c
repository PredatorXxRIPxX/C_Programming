#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool anagrame(char mot1[],char mot2[]){
    bool answer=false;
    for (size_t i = 0; i < strlen(mot1); i++)
    {
        for (size_t j = 0; j < strlen(mot2); j++)
        {
            if (mot1[i]==mot2[j])
            {
                answer=true;
                break;
            }
            
        }
        
    }
    return answer;
    
}

void lesphrase(){
    char phrase1[500];
    char phrase2[500];
    printf("donner votre premier phrase: ");
    scanf("%s",phrase1);

    printf("donner votre deuxieme phrase: ");
    scanf("%s",phrase2);

    bool answer=anagrame(phrase1,phrase2);
    if (answer==1)
    {
        printf("True");
    }else
    {
        printf("False");
    }
    
    
}

int main(){
    printf("donner votre premier mot: ");
    char mot1[25];
    char mot2[25];
    scanf("%s",mot1);
    printf(("donner votre deuxieme mot: "));
    scanf("%s",mot2);
    printf("%s\t%s\n",mot1,mot2);
    bool answer=anagrame(mot1,mot2);
    printf("%i",answer);
    lesphrase();
}