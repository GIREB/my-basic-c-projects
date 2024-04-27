#include <stdio.h>
#include <stdlib.h>

//Date:27.4.2024 TR FORMAT
//Author:Can Çetin
//malloc is a function that allocates memory dynamically:MEMORY ALLOCATION
//calloc is a function that allocates memory dynamically and initializes all bits to zero:CONTIGUOUS MEMORY ALLOCATION
//realloc is a function that reallocates memory dynamically:REALLOCATION OF MEMORY
int main(){

    int *area1=malloc(10*sizeof(int));
    int *area2=calloc(10,sizeof(int));
    
    area1[0]=1;
    area2[0]=1;

    for (int i = 0; i < 10; i++)
    {
        printf("area1[%d]:%d\n area2[%d]:%d\n",i,area1[i],i,area2[i]);
    }
    area1=realloc(area1,15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("area1[%d]:%d\n",i,area1[i]);
    }

    free(area1);
    free(area2);

    return 0;
}