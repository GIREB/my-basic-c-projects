#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

void insertionSort(int myarray[],int dimension){
    int myvalue;
    int previousvalue;
    for (int i = 1; i < dimension; i++)
    {
        myvalue=myarray[i];
        previousvalue=i-1;

        while (previousvalue>=0&&myarray[previousvalue]>myvalue)
        {
            myarray[previousvalue+1]=myarray[previousvalue];
            previousvalue--;
        }
        myarray[previousvalue+1]=myvalue;
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

    insertionSort(arayelements,dimension);

    for (int i = 0; i < dimension; i++)
    {
        printf("%d",arayelements[i]);
    }
    return 0;
}
