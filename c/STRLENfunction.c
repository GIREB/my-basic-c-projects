#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Date:4.24.2024
//Author: Can Çetin
int main(){
    
    // strlen() function is used to find the length of the string.
    char name[]="Bayram Can";
    printf("The length of the string is: %d\n", strlen(name));
    
    char name2[15];
    printf("Enter a word: \n");
    scanf("%s", name2);

    int length = strlen(name2);
    printf("The length of the string is: %d\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", name2[i]);
    }
    printf("\n");
    for (int i = length-1; i >=0; i--)
    {
        printf("%c\n", name2[i]);
    }
   
    // Example
    char password[8];
    printf("Enter a password: \n");
    scanf("%s", password);

    if (strlen(password) < 8)
    {
        printf("Password is too short\n");
    }
    else if (strlen(password) >= 8)
    {
        printf("Password is: %s\n", password);
        for (int i = 0; i < (int)strlen(password); i++)
        {
            printf("*");

        }
    }
    else
    {
        printf("Invalid password\n");
        
    }
    return 0;
}