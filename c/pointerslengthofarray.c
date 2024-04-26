#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Date:4.26.2024
//Auuthor:Can Çetin
//Purpose:Finding the length of the array using pointers

int findlengthofarray(char *addressofarr){
    int lengthofarr = 0;
    for (int i = 0; addressofarr[i]!='\0'; i++)
    {
        lengthofarr++;
    }
    return lengthofarr;
    
}

int main(){

    char myDnacode[] = "ATCG";
    //these two lines are the same
    printf("Length of the array is %d\n",findlengthofarray(myDnacode));
    //or
    printf("Length of the array is %d\n",strlen(myDnacode));
    return 0;

}