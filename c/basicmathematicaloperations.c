 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14
int main(){
    setlocale(LC_ALL,"Turkish");

//example1
    int kareninbirkenari;
    printf("Karenin Bir Kenarini cm Cincinden Giriniz...\n");
    scanf("%d",&kareninbirkenari);
    printf("Karenin Alani: %d cm\n",kareninbirkenari*kareninbirkenari);

//example2
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
    printf("alani dikdortgenin %d\n",uzunkenardikdortgen*kisakenardikdortgen);

//example3
    float cemberinyaricapi;
    printf("Cemberin Yaricapini Giriniz...\n");
    scanf("%f",&cemberinyaricapi);
    printf("%f\n",pi);
    printf("Cemberin Alani:%f\n",pi*cemberinyaricapi*cemberinyaricapi);
    printf("Cemberin Cevresi:%f\n",2*pi*cemberinyaricapi);


    //NOTE:Pay attention whether use turkish letter or not.

//example4
    float kupunbirkenari;

    printf("Bana Bir Kup Kenari Soyle Sana Hacmini ve Yanal Alanlari Toplamini Soyleyeyim...\n");
    scanf("%f",&kupunbirkenari);

    float yanalAlanlariToplami=6*kupunbirkenari*kupunbirkenari;
    float kupunhacmi=kupunbirkenari*kupunbirkenari*kupunbirkenari;

    printf("Kupun yanal alanlari toplami:%.2f\n",yanalAlanlariToplami);
    printf("Kupun hacmi:%.3f\n",kupunhacmi);
    

//example5   
    int sayi1;
    printf("Lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi1);
    if (sayi1%10==0)
    {
        printf("%d :10'a bolunebiliyor...\n",sayi1);
    }
    else{
        printf("%d :10'a bolunemiyor...\n",sayi1);
    }

//example6
  float sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;
    printf("Lutfen 3 farkli tamsayi degeri giriniz...\n");
    scanf("%f%f%f",&sayi1,&sayi2,&sayi3);

    toplam=sayi1+sayi2+sayi3;
    carpim=sayi1*sayi2*sayi3;
    ortalama=toplam/3; //you can do instead of(sayi1+sayi2+sayi3)/3

    kucuk=sayi1;

    if (sayi2<kucuk)
    {
        kucuk=sayi2;
    }
    if (sayi3<kucuk)
    {
        kucuk=sayi3;
    }
    buyuk=sayi1;
    if (sayi2>buyuk)
    {
        sayi2=buyuk;
    }
    if (sayi3>buyuk)
    {
        sayi3=buyuk;
    }

    printf("Toplam:%f\n Carpim:%f\n Ortalama:%f\n",toplam,carpim,ortalama);
    printf("Kucuk sayi:%f\n",kucuk);
    printf("Buyuk Sayi:%f\n",buyuk);

    return 0;
}