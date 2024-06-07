#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//my purpose is to find spesific area in my DNA by using linear search algorithm.I find area's index to identify infected area which was replaced opposite on DNA.
//firstly declare char aray contains your DNA sequences,replaced copule of base,size,result of scan.
//secondly use control structures.ıs user enter number which already exist in my array.

int indexofmyDNAsecuences(char *myDNAsequences[],char *wantedsequences,int size){
    for (int i = 0; i <size; i++)
    {
        if (strcmp(myDNAsequences[i],wantedsequences)==0)
        {
            return i;
        }
        else{
            printf("your DNA sequences couldnt scan...\n");
        }
    }
    return -1;
}
int main(){
    char *elementsofmyDNA[]={"ATAAGSA","ATATTGT","ATTGGSA"};
    char wantedsequences[50];
    int size=sizeof(elementsofmyDNA)/sizeof(char*);

    while (1)
    {
        printf("please,enter your DNA which is replaced ");
        scanf("%s", wantedsequences);
        int resultofscan=indexofmyDNAsecuences(elementsofmyDNA,wantedsequences,size);
        if (resultofscan>=0)
        {
            printf("index you want to learn:%d \n",resultofscan);
        }
        else{
            printf("couldnt find\n");
        }
    }
    return 0;
}