#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");
    int satir,sutun,dikucgenkenar;
    printf("Lutfen dik ucgenin kenarini giriniz...\n");
    scanf("%d",&dikucgenkenar);

    for (satir=1 ;satir <=dikucgenkenar; satir++)
    {
        for (sutun= 1;sutun<=satir; sutun++)
        {
          printf("*");
        }
        printf("\n");
    }
    
    return 0;
}