#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");
    int satir,sutun,sayi;
    printf("Lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    for (satir= 1;satir<=sayi;satir++)
    {
        for (sutun=sayi-satir;sutun>=0;sutun--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}