#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linearSearchalgorithm(int array[],int wantednumber,int sizearray){

    for (int i = 0; i < sizearray; i++)
    {
        if (array[i]==wantednumber)
        {
            return i;//find index
        }
    }
    return -1;//if user enter value doesnt exist in the array
    
}
int main(){
    int myExamResults2[]={65,85,75};
    int size=sizeof(myExamResults2)/sizeof(int);
    int wantednumber;
    
    while (1)
    {
        printf("enter number you wonder index where is.");
        scanf("%d",&wantednumber);
        int resultsofscan=linearSearchalgorithm(myExamResults2,wantednumber,size);
        if (resultsofscan>=0)
        {
            printf("number you are looking for is on %d. index\n",resultsofscan);
        }
        else{
            printf("number you are looking for couldnt find...\n");
        }
    }
    return 0;
}