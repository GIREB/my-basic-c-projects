//created:24.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
    char ismim[10]="Can Cetin";
    printf("%s",ismim);

    for (int i = 0; i < 9; i++)
    {
        printf("%d.elemani =%c\n",i+1,ismim[i]);
    }
    
    char takimismi[]={'G','A','L','A','T','A','S','A','R','A','Y','\0'};
    for (int i = 0; i < 12; i++)
    {
        printf("%c",takimismi[i]);
    }
    printf("\n");
     char yegenim[]="AYBILGE";
     printf("%s\n",yegenim);

     char ulke[8];
     for (int i = 0; i < 7; i++)
     {
     printf("Lutfen bir ulke ismi giriniz...\n");
     scanf(" %c",&ulke[i]);
     }
     printf("%s",ulke);

    return 0;
}