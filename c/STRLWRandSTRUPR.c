#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert a string to lowercase
// Function to convert a string to uppercase
// Date:4.25.2024 US format
// Author:Can ÇETİN

int main(){

    char word[30];
    printf("Enter a word\n");
    fgets(word, sizeof(word), stdin);
    
    strlwr(word);
    printf("Lowercase: %s\n",word);
    
    strupr(word);
    printf("Uppercase: %s\n",word);

    return 0;
}