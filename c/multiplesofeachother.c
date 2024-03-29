#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    
    int kucuksayi,buyuksayi;
    printf("Birbirinin kati oldugunu ogrenmek istediginiz sayiyi giriniz.Once buyuk sayiyi giriniz...\n");
    scanf("%d %d",&buyuksayi,&kucuksayi);
    if (buyuksayi%kucuksayi==0)
    {
        printf("%d %d'nin bir carpanidir",kucuksayi,buyuksayi);
    }
    else {
        printf("%d %d'nin bir carpani degildir.",kucuksayi,buyuksayi);
    }

    return 0;
}