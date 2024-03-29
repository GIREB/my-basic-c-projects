#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
setlocale(LC_ALL,"Turkish");

    printf("MENU\t\tORDER CODE\tPRICE\n");
    printf("Baslangiclar\t\t1\t5.5tl\n");
    printf("Ara Sicaklar\t\t2\t7.5tl\n");
    printf("Salatalar\t\t3\t12tl\n");
    printf("Ana Yemekler\t\t4\t17.75tl\n");
    printf("Tatlilar\t\t5\t25tl\n");
    printf("Icecekler\t\t6\t2.25tl\n");

    int siparisnumarasi;
    float toplamtutar,porsiyon;
menu:printf("Lutfen yemek istediginiz urunun siparis kodunu giriniz...\n");
    scanf("%d",&siparisnumarasi);

if(siparisnumarasi==-1){
    goto cikis;
}
if(siparisnumarasi>0&&siparisnumarasi<7){
    printf("Lutfen kac porsiyon yemek istediginizi giriniz...\n");
    scanf("%f",&porsiyon);
}

switch (siparisnumarasi)
    {
case 1:
    if (porsiyon>0)
    {
    toplamtutar+=porsiyon*5.5;
    printf("Toplam tutar: %f\n",toplamtutar);
    }
    else{
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
case 2:
    if (porsiyon>0){
    toplamtutar+=porsiyon*7.5;
    printf("Toplam tutar: %f\n",toplamtutar);
}
    else {
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
case 3:
    if (porsiyon>0){
    toplamtutar+=porsiyon*12;
    printf("Toplam tutar:%f\n",toplamtutar);
    }
    else{
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
case 4:

    if (porsiyon>0){
    toplamtutar+=porsiyon*17.75;
    printf("Toplam tutar: %f\n",toplamtutar);
    }
    else{
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
case 5:
    if(porsiyon>0){
    toplamtutar+=porsiyon*25;
    printf("Toplam tutar: %f\n",toplamtutar);
    }
    else{
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
case 6:
    if(porsiyon>0){
    toplamtutar+=porsiyon*2.25;
    printf("Toplam tutar: %f\n",toplamtutar);
    }
     else{
    printf("Lutfen 0'dan buyuk bir porsiyon giriniz...\n ");
    }
    break;
    default:
    printf("Lutfen 1-6 arsinda secim yapiniz");
    break;
    
    }

    goto menu;
    cikis:
    printf("Siparisiniz tamamlandi.");
    printf("Toplam tutar:%f",toplamtutar);

return 0;
}
  