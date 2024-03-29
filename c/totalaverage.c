//created:25.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    int girilensayiadedi;
    float sayilar[100],toplam=0,ortalama;

    printf("Lutfen kac tane sayinin ortalamasini hesaplamak istediginizi giriniz...\n");
    scanf("%d",&girilensayiadedi);

    while (girilensayiadedi>100 || girilensayiadedi<=0)
    {
        printf("Lutfen 0-100 araasinda bir sayi giriniz...\n");
        printf("Lutfen kac tane sayinin ortalamasini hesaplamak  istediginizi giriniz...\n");
        scanf("%d",&girilensayiadedi);
    }

    for (int i = 0; i < girilensayiadedi; i++)
    {
        printf("Lutfen %d. sayiyi giriniz...\n",i+1);
        scanf("%f",&sayilar[i]);
        toplam+=sayilar[i];
    }
    ortalama=toplam/girilensayiadedi;
    printf("Girilens sayilarin toplami=%f\n",toplam);
    printf("Girilen sayilarin ortalamasi=%f\n",ortalama);

    
    return 0;
}