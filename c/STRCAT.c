#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Date:4.25.2024
//Author:Can Çetin
//Purpose:To learn how to use strcat function
//Description:This program takes name and job from user and prints them with strcat function
int main(){

    char myname[20];
    char myjob[30];
    printf("Enter your name and job: ");
    scanf("%s %s", myname, myjob);

    char myinfo[70]="";

    //strcat function is used to concatenate two strings
    strcat(myinfo, myname);
    strcat(myinfo,"");
    strcat(myinfo, myjob);

    printf("My name is %s and I am an %s\n", myname, myjob);
}