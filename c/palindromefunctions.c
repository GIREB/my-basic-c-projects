#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Date:4.25.2024 US format
//Author:Can Çetin
//Purpose:To check if a word is a palindrome or not
int main(){

    char word[20];
    char reversed[20];
    printf("Enter a word\n");
    scanf("%s",word); 

    strcpy(reversed,word); // strcpy(destination,source)
    strrev(reversed); // strrev(string) reverses the string


    if (strcmp(word,reversed)==0)
    {
        printf("The word is a palindrome\n");
    }
    else
    {
        printf("The word is not a palindrome\n");
    }
    
    return 0;
}