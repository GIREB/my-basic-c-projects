#include <stdio.h>
#include <stdlib.h>

//Date:27.04.2024 TR format
//Author:Can Çetin
// This program creates a multidimensional string of characters in memory and then prints them out

int main(){

    char **myDNA=calloc(4, sizeof(char*));
    for (int i = 0; i < 4; i++)
    {
        myDNA[i]=calloc(4, sizeof(char));
    }
    
    myDNA[0][0] = 'A';
    myDNA[0][1] = 'T';
    myDNA[0][2] = 'G';
    myDNA[0][3] = 'C';

    myDNA[1][0] = 'C';
    myDNA[1][1] = 'G';
    myDNA[1][2] = 'T';
    myDNA[1][3] = 'A';

    myDNA[2][0] = 'T';
    myDNA[2][1] = 'A';
    myDNA[2][2] = 'C';
    myDNA[2][3] = 'G';

    myDNA[3][0] = 'G';
    myDNA[3][1] = 'C';
    myDNA[3][2] = 'A';
    myDNA[3][3] = 'T';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c", myDNA[i][j]);
        }
        printf("\n");
    }
    return 0;
}
