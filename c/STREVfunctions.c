#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to reverse a string
//ated:4.25.2024 US format
//rohtua:Nac Nitec

int main(){

    char word[20];
    while (1)
    {
        printf("Enter a word\n");
        scanf("%s",word); 
        strrev(word);
        printf("The reverse of the word is %s\n",word);
        printf("Do you want to continue? (y/n)\n");
        char ch;
        scanf(" %c",&ch);
        if (ch=='n')
        {
            break;
        }
    }
    return 0;
}

    