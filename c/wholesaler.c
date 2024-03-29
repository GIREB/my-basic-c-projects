#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    int adet;
    float adetfiyati;

    printf("Kac adet urun alacaksiniz?\n");
    scanf("%d",&adet);

    if (adet>=400)
    {
        adetfiyati=0.75;
    }
    else if (adet>=300&&adet<=400)
    {
        adetfiyati=1.25;
    }
    else if (adet>=200&&adet<=300)
    {
        adetfiyati=2;
    }
    else if (adet>=100&&adet<=200)
    {
        adetfiyati=2.5;
    }
    else if (adet>0&&adet<=100)
    {
        adetfiyati=3;
    }
    else{
        printf("Lutfen 1 veya 1'den buyuk adet sayisi giriniz...\n");
    }

    float toplamtutar=adet*adetfiyati;
    int toplamtutaryuvarlama=toplamtutar;

    //printf("TL Cinsinden Odenecek Toplam Tutar:%f %d",toplamtutar,toplamtutaryuvarlama);

    float yapilanindirim=toplamtutar-toplamtutaryuvarlama;
    
    printf("Toplam Tutar:%f Yapilan Indirim:%f Odemeniz gereken tutar:%d",toplamtutar,yapilanindirim,toplamtutaryuvarlama); 

    return 0;
}