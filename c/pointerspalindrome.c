#include <stdio.h>
#include <stdlib.h>

//Date:27.4.2024 TR FORMAT
//Author:Can Çetin
//palindrome is a word that reads the same backward as forward
//firstly we need to look at the pointers  by using for loop
//then we need control the values of pointers whether they are equal or not
//if they are equal we need to increment the ptrnormal and decrement the ptrreverse
//finally if ptrnormal value is greater than ptrreverse value we can say that the word is palindrome

int main(){

    char word[30];
    char *ptrnormal, *ptrreverse;

    while (1)
    {
        printf("Enter a word you want to know whether palindrome is or not: ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = 0;//to remove the newline character from the string.
        if (word[0]=='0')
        {
            break;
        }
        for (ptrreverse=word; *ptrreverse !='\0'; ptrreverse++);
    
        for (ptrnormal=word,ptrreverse-- ;ptrnormal<=ptrreverse ;)
        {
            if (*ptrreverse==*ptrnormal)
            {
                ptrreverse--;
                ptrnormal++;
            }
            else
            {
                break;
            }
            
        }
        if (ptrnormal > ptrreverse)
        {
            puts(word);
            printf("The word is palindrome\n");
        }
        else
        {
            puts(word);
            printf("The word is not palindrome\n");
        }
    }
        return 0;
}