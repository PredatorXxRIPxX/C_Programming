#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int t[1000];
    int taille;
    taille=1000;
    for (size_t i = 0; i < 1000; i++)
    {
        t[i]=i;
    }
    int element;
    printf("donner un element le quelle vous cherchez: ");
    scanf("%d",&element);
    printf("tri par séquencielle:");
    int temp;
    for (size_t i = 0; i < taille; i++)
    {
        if (t[i]==element)
        {
            temp=i;
            break;
        }
        
    }
    printf("ton element il existe dans la case ; %d",temp);
    printf("tri par dichotomique");
    printf("donner un element: ");
    scanf("%i",&element);
    int milieu;
    int debut,fin;
    debut =0;
    fin=taille;
    bool act=false;
    do
    {
        milieu=(debut+fin)/2;
        if(t[milieu]==element){
            printf("element trouver");
            act=true;
            break;
        }else{
            if (t[milieu]<element)
            {
                debut=milieu+1;
                fin=taille;
            }else if(t[milieu]<element){
                debut=0;
                fin=milieu-1;
            }
            
        }
        
        
    } while (act==false);
    printf("votre element ce exist dans l'emplacement ; %d",temp);
    
    return 0;
}
