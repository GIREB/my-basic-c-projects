#include <stdio.h>
#include <stdlib.h>

//Date:27.04.2024 TR format
//Author:Can Çetin
// This program creates a string of characters in memory and then prints them out

int main(){

    char *myDNA=calloc(4, sizeof(char));

    myDNA[0] = 'A';
    myDNA[1] = 'T';
    myDNA[2] = 'G';
    myDNA[3] = 'C';

    for (int i = 0; i < 4; i++)
    {
        printf("%c", myDNA[i]);
    }
    return 0;
}