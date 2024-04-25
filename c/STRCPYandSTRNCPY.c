#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Date:4.25.2024 US format
//Autho:Can Çetin
//You should run seperately these functions to see the results.

int main(){

    char location[15]="Istanbul";
    char country[15];

    // strcpy() function is used to copy a string to another string.
    strcpy(country, location);
    printf("The best city in the world is: %s\n", country);
    
    // strncpy() function is used to copy a string to another string with a limit.
    strncpy(country, location, 7);
    printf("The best city in the world is: %s\n", country);

    return 0;
}