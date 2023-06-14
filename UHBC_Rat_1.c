#include<stdio.h>
#include<stdlib.h>

struct file{
    int val;
    struct file *suivant;
};

void pluspetit_plusgrand(struct file *f){
    int min=f->val;
    difiler(f);
    int max=f->val;
    difiler(f);
    if (min>max)
    {
        int tmp=max;
        min=max;
        max=tmp;
    }
    while (f!=NULL)
    {
        if (f->val>max)
        {
            max=f->val;
        }
        if (f->val<min)
        {
            min=f->val;
        }
        difiler(f);
        
    }
    printf("le plus petit est %i le plus grand %i",min,max);
}