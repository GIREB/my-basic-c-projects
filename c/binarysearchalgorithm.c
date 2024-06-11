#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binarySearchalgorithm(int myArray[],int lowestvalue,int higestvalue,int wantedvalue){
    while (lowestvalue<=higestvalue)
    {
        int mediumvalue=lowestvalue+(higestvalue-lowestvalue)/2;
        if (myArray[mediumvalue]==wantedvalue)
        
            return mediumvalue;
        
        if (myArray[mediumvalue]<wantedvalue)
        
            lowestvalue=mediumvalue+1;
        
        else
        
            higestvalue=mediumvalue-1;
        
    }
    return -1;
}
int main(){
    int numbers[]={2,3,4,8,11,13,78};
    int size=sizeof(numbers)/sizeof(int);
    int wantednumber;

    while (1)
    {
        printf("enter number you want to learn an index...\n");
        scanf("%d",&wantednumber);

        int resultofscan=binarySearchalgorithm(numbers,0,size-1,wantednumber);

        if (resultofscan>=0)
        {
            printf("number you are looking for is on the %d\n.index",resultofscan);
        }
        else{
            printf("number couldnt find...\n");
        }
    }
    return 0;
}