#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void rempliraleitoire(int t[],int  taille,int valmax){

        int i,nbrDeCase;

/*#################################################remplir le tableau ######################################################################*/
    for( i=0;i<taille;i++){
        t[i]=rand()%valmax;
        printf("%i\t",t[i]);
    }
}
/*##################################################tri par selection ########################################################################*/
void selection(int t[50], int taille){
    int pmin,i, j,perm;
    clock_t start,end;
    start=clock();
    for (i=0;i<taille;i++){
        pmin=i;
        for(j=i+1;j<taille;j++){
            if(t[j]<t[pmin]){
            pmin=j;
            }
        }
if (i!=pmin){
perm=t[i];
t[pmin]=perm;
}
}
end=clock();
for (size_t i = 0; i < taille; i++)
{
    printf("%d \t",t[i]);
}
printf(" \n %f scnds",(float)(end-start)/CLOCKS_PER_SEC);
}
/*###################################################tri par insertion ############################################################################*/
void insertion( int t[50],int taille){
    clock_t start,end;
int temp,i,j;
start=clock();
for(i=0;i<taille;i++){
temp=t[i];
j=i-1;
while(j>=0&& t[j]>temp){
t[j+1]= t[j];
j--;
}
t[j+1]=temp;
}
end=clock();
for (size_t i = 0; i < taille; i++)
{
    printf("%d \t",t[i]);
}

printf(" \n %f scnds",(float)(end-start)/CLOCKS_PER_SEC);

}/*#####################################################tri a bulle####################################################################################*/
void bulle(int t[], int taille){
clock_t start,end;
int ech;
int tmp;
do
{
    ech=0;
    for (size_t i = 1; i < taille; i++)
    {
        if (t[i-1]>t[i])
        {
            tmp=t[i];
            t[i]=t[i-1];
            t[i-1]=tmp;
            ech++;    
        }
        
    }
    
    
} while (ech!=0);
for (size_t i = 0; i < taille; i++)
{
    printf("%d \t",t[i]);
}
printf(" \n %f scnds",(float)(end-start)/CLOCKS_PER_SEC);

};
void affichage(int T[],int nbrDeCase){
    int i;
    printf("Le Tableau 😕");

    for(i=0;i<nbrDeCase;i++){
        printf("///////\n");
        printf("T[%d] = %6d",i+1,T[i]);

    }
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int nmbr=0; int t[50];

/*#################################### remplire aleitoire ########################################*/
    printf (" entrer la taille de tableau ");
    scanf("%d",&nmbr);
    rempliraleitoire( t,nmbr,10000000);

/*############################## affichage de tableau #######################################*/
    printf("\n voulez vous affichez les elements : [1]oui [2]non: \n");
    int x;
    scanf("%d",&x);
    if (x==1)
    {
    affichage(t, nmbr);
    }
    
 
 
 
/*################################################################ calcule le temp ##############################################################################*/
    int choix;
    printf (" entrer la methode de tri  entrer 1 --> selection ,,,,, 2-->insertion,,,, 3--> bulle :le choix est ");
    scanf ("%d", &choix);
    switch(choix){
    case 1 : selection(t,nmbr);
    break;
    case 2: insertion(t, nmbr);
    break;
    case 3: bulle(t,nmbr);
    break;
    }
    printf("\n");
    return 0;
};