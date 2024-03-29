#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    char ismim[]="Yaptigin islemler:";
    printf("Good job!Keep it up!");

    scanf("%c\n",ismim);
    printf("%s\n",ismim);

    int sayi1=27;
    sayi1+=5;
    printf("%d\n",sayi1);

    int sayi2=6;
    sayi2-=3;
    printf("%d\n",sayi2);

    int sayi3=25;
    sayi3*=5;
    printf("%d\n",sayi3);

    int sayi4=96;
    sayi4/=4;
    printf("%d\n",sayi4);
    int sayi5=25;

    sayi5%=4;
    printf("%d\n",sayi5);
    int sayi6,sayi7,sayi8;

    sayi6=4;
    sayi7=sayi6++;
    sayi8=++sayi6;
    printf("%d %d %d\n",sayi6,sayi7,sayi8);//hocaya sor!
    
    int kareninbirkenari;
    printf("Karenin Bir Kenarini cm Cincinden Giriniz...\n");
    scanf("%d",&kareninbirkenari);
    printf("Karenin Alani: %d cm\n",kareninbirkenari*kareninbirkenari);


    int dikdortgeninuzunkenari,dikdortgeninkisakenari;
    printf("Dikdortgenin kisa kenarini giriniz:");
    scanf("%d",&dikdortgeninkisakenari);
    printf("Dikdortgenin uzun kenarini giriniz:");
    scanf("%d",&dikdortgeninuzunkenari);
    printf("Dikdortgenin Alani %d\n",dikdortgeninkisakenari*dikdortgeninuzunkenari);

    //note.Dont forget!Dont use "\n" in scanf function.This is not typicial behavior.
    //Another method,which is easy.

    
    int uzunkenardikdortgen,kisakenardikdortgen;
    printf("Dikdortgenin basta uzun ve kisa kenarini giriniz:\n");
    scanf("%d %d",&uzunkenardikdortgen,&kisakenardikdortgen);
    printf("alani dikdortgenin %d",uzunkenardikdortgen*kisakenardikdortgen);

    return 0;
}