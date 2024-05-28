#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

void bubblesort(int myarray[],int dimension){
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 1; j< dimension-i; j++)
        {
                if (myarray[j-1]>myarray[j])
                {
                    int temp=myarray[j];
                    myarray[j]=myarray[j-1];
                    myarray[j-1]=temp;
                }
                
        }
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

    bubblesort(arayelements,dimension);

    for (int i = 0; i < dimension; i++)
    {
        printf("%d",arayelements[i]);
    }
    return 0;
}