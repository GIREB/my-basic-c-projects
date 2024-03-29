#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
    tryagain:int doorCode;
    printf("Please,enter the doorcode to go in...\n");
    scanf("%d",&doorCode);
    if (doorCode==1453)
    {
        goto cikis;
    }

    else if (doorCode!=1453)
    {
        printf("Please,try again...\n");
    }
    goto tryagain;
    cikis:printf("The door is now open.\n");

    return 0;
}