#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");
    
    int kareninbirkenari,satir,sutun;
    printf("Lutfen karenin bir kenarinin kac yildizdan olusacagini seciniz...\n");
    scanf("%d",&kareninbirkenari);

    for ( satir = 1; satir <= kareninbirkenari; satir++)
    {
        for (sutun= 1; sutun <=kareninbirkenari; sutun++)
        {
            printf("*\t");
            
        }
        printf("\n\n\n");
    }
    return 0;
}


























