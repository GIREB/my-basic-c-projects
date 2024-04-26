#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024 US Format
//Author:Can Çetin
//you should look at ASCII table to understand the char values

int main(){

    int number=12, *pNumber;
    pNumber=&number;
    //these are the same
    printf("Number: %d\t%x\n",*pNumber,pNumber);
    printf("Number: %d\t%x\n",number,&number);
    printf("this is the next address:%x\n",pNumber+1);
    //note: the next address is 4 bytes after the first address
    printf("\n");

    float number2=12.5, *pNumber2;
    pNumber2=&number2;
    //these are the same
    printf("Number: %f\t%x\n",*pNumber2,pNumber2);
    printf("Number: %f\t%x\n",number2,&number2);
    printf("this is the next address:%x\n",pNumber2+1);
    //note: the next address is 4 bytes after the first address
    printf("\n");

    char letter='A', *pLetter;
    pLetter=&letter;
    //these are the same
    printf("Number: %c\t%x\n",*pLetter,pLetter);
    printf("Number: %c\t%x\n",letter,&letter);
    printf("this is the next address:%x\n",pLetter+1);
    //note: the next address is 1 byte after the first address
    printf("\n");
    

    double number4=12.5, *pNumber4;
    pNumber4=&number4;
    //these are the same
    printf("Number: %f\t%x\n",*pNumber4,pNumber4);
    printf("Number: %f\t%x\n",number4,&number4);
    printf("this is the next address:%x\n",pNumber4+1);
    //note: the next address is 8 bytes after the first address
    printf("\n");
    
    //note:in the char array, the pointer is the same as the array name
    char array [20]="ATCGCUAGTACG", *pArray;
    pArray = array;
    //these are the same
    printf("Array: %s\t%p\n", pArray, pArray);
    printf("Array: %s\t%p\n", array, array);
    printf("this is the next address:%p\n",pArray+1);
    //note: the next address is 1 byte after the first address
    printf("\n");

    return 0;
}