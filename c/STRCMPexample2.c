#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmp() function is used to compare two strings. It compares the two strings and returns an integer value.
//The function returns 0 if the two strings are equal.
//It returns a positive value if the first string is greater than the second string.
//It returns a negative value if the first string is less than the second string.
//Date:4.25.2024
//Author:Can Çetin

int main(){
    
    char username[20];
    char password[20];
    char correctusername[]="can";
    char correctpassword[]="1453";

    printf("Enter your username and password\n");
    scanf("%s %s",username,password);

    if(strcmp(username,correctusername)==0 && strcmp(password,correctpassword)==0){
        printf("You have successfully logged in\n");
    }
    else{
        if (strcmp(username,correctusername)!=0)
        {
            printf("You have entered the wrong username\n");
        }
        if(strcmp(password,correctpassword)!=0)
        {
            printf("You have entered the wrong password\n");
        }
    }
   
    return 0;
}