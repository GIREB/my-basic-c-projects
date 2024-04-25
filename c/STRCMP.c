#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmp() function is used to compare two strings. It compares the two strings and returns an integer value.
//The function returns 0 if the two strings are equal.
//It returns a positive value if the first string is greater than the second string.
//It returns a negative value if the first string is less than the second string.
//The strcmp function in C compares  lexicographically like a dictionary order.
//Date:4.25.2024
//Author:Can Çetin

int main(){

    char myfavouritesoup[]="lentil soup";
    char myfavouritecolor[]="white";

    
    if(strcmp(myfavouritesoup,myfavouritecolor)==0){
        printf("The strings are the same\n");
        }
    else if (strcmp(myfavouritesoup,myfavouritecolor)>0)
        {
            printf("The first string is greater than the second string\n");
        }
    else if (strcmp(myfavouritesoup,myfavouritecolor)<0)
        {
            printf("The first string is less than the second string\n");
        }
    else
        {
            printf("An error occured\n");
        }
    return 0;
}