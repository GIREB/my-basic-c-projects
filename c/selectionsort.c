#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

void selectionsort(int myarray[],int dimension){
    int minidex;
    for (int i = 0; i < dimension; i++)
    {
        minidex=i;
        for (int j = i; j < dimension; j++)
        {
            if (myarray[j]<myarray[minidex])
            {
                minidex=j;
            }
            
        }
        int temp=myarray[i];
        myarray[i]=myarray[minidex];
        myarray[minidex]=temp;
    }
    
}
int main(){

    int arayelements[max],dimension;
    printf("how many count elements do you want to create?\n");
    scanf("%d",&dimension);

    for (int i = 0; i < dimension; i++)
    {
        scanf("%d",&arayelements[i]);
    }
    
    for (int i = 0; i < dimension; i++)
    {
        printf("%d",arayelements[i]);
    }
    printf("\n");

    selectionsort(arayelements,dimension);

    for (int i = 0; i < dimension; i++)
    {
        printf("%d",arayelements[i]);
    }
    return 0;
}