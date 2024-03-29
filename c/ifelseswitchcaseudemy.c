#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    
    int ayinnumarasi;
    char ayinmevsimi;
    printf("Lutfen ogrenmek istediginiz ayi giriniz...\n");
    scanf("%d",&ayinnumarasi);
    switch(ayinnumarasi)
    {
case 1:
        printf("%d numarali ay:Ocak\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 2:
        printf("%d numarali ay:Subat\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 3:
        printf("%d numarali ay:Mart\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 4:
        printf("%d numarali ay:Nisan\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 5:
        printf("%d numarali ay:Mayis\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 6:
        printf("%d numarali ay:Haziran\n",ayinnumarasi);
        ayinmevsimi='y';
        break;
case 7:
        printf("%d numarali ay:Temmuz\n",ayinnumarasi);
        ayinmevsimi='y';
        break;
case 8:
        printf("%d numarali ay:Agustos\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 9:
        printf("%d numarali ay:Eylul\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 10:
        printf("%d numarali ay:Ekim\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 11:
        printf("%d numarali ay:Kasim\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 12:
        printf("%d numarali ay:Aralik\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
    }
    if (ayinmevsimi=='i')
    {
        printf("ilkbahar mevsimi.");
    }
    else if (ayinmevsimi=='y')
    {
        printf("Yaz Mevsimi");
    }
    else if (ayinmevsimi=='s')
    {
        printf("Sonbahar Mevsimi");
    }
    else if (ayinmevsimi=='k')
    {
        printf("Kis Mevsimi");
    }
    else{
        printf("Lutfen bir mevsimin bas harfini giriniz...\n");
    }
    /*int secim2;
    float sayi3,sayi4;
menu:printf("Lutfen yapmak istediginiz islemi seciniz...\n");
    printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Kuvvet\n");
    printf("Lutfen cikmak icin -1 degerini giriniz...\n");
    scanf("%d",&secim2);

if (secim2==-1)
{
    goto cikis;
}


if (secim2>0&&secim2<7)
{
    printf("Lutfen 2 adet sayi giriniz...\n");
    scanf("%f%f",&sayi3,&sayi4);
}
    switch(secim2){
        case 1:
        printf("Toplam:%f\n",sayi3+sayi4);
        break;
        case 2:
        printf("Cikarma:%f\n",sayi3-sayi4);
        break;
        case 3:
        printf("Carpma:%f\n",sayi3*sayi4);
        case 4:
        printf("Bolme:%f\n",sayi3/sayi4);
        break;
        case 5:
        printf("Karekok %f=%f\nkarekok %f=%f\n",sayi3,sqrt(sayi3),sayi4,sqrt(sayi4));
        break;
        case 6:
        printf("%f uzeri %f=%f",sayi3,sayi4,pow(sayi3,sayi4));
        break;
        default:
        printf("Lutfen 1-6 arasinda bir secim yapiniz...\n");
        //switch yapısının içinde yalnızca case yapılarını kullanabilirsin.
        
    }
goto menu;
cikis:printf("islemler tamamlanmistir.Gorusmek dilegiyle...");*/


   return 0;
}