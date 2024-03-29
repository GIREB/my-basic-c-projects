#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
//sayının ebobunu bulma

int sayi7,sayi8,buyuk,kucuk,kalan;
   do
    {
        printf("Lutfen ebobunu ogrenmek istediginiz iki tam sayiyi giriniz...\n");
        scanf(" %d %d",&sayi7,&sayi8);
        
    }   
    while (sayi7<=0 || sayi8<=0);
    if (sayi7>sayi8)
    {
        buyuk=sayi7;
        kucuk=sayi8;
    }
    else{
        buyuk=sayi8;
        kucuk=sayi7;
    }
    kalan=buyuk%kucuk;
    while (kalan!=0)
    {
        if (kalan>=kucuk)
        {
            buyuk=kalan;
        }
        else{
            buyuk=kucuk;
            kucuk=kalan;
        }
        kalan=buyuk%kucuk;
        
    }
    printf("Ebob (%d,%d)=%d",sayi7,sayi8,kucuk);

    return 0;
    }