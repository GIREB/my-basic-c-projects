#include <stdio.h>
#include <stdlib.h>

//Date:27.04.2024 TR format
//Author:Can Çetin
// This program creates a string of integers in memory and then sums them up

int main(){
    
    int *numstring =calloc(6, sizeof(int));

    numstring[0] = 1;
    numstring[1] = 2;
    numstring[2] = 3;
    numstring[3] = 4;
    numstring[4] = 5;
    numstring[5] = 6;

    int sum = 0;
    for(int i = 0; i < 6; i++){
        sum += numstring[i];
    }
    printf("Sum of the numbers in the string is: %d\n", sum);

    free(numstring);

    return 0;
}