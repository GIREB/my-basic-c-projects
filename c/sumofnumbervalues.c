#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
     
    int sayi6;
    int basamaksayisi=0;
    int sayidegerlerinintoplami=0;
    int orjinalsayi;
    char devam='E';

while(devam=='e'||devam=='E'){
printf("Lutfen sayi degerlerinin toplamini ogrenmek istediginiz pozitif sayiyi giriniz...\n ");
scanf("%d",&sayi6);

orjinalsayi=sayi6;

if(sayi6>=0){
do
{
    sayidegerlerinintoplami+=sayi6%10;
    basamaksayisi++;
    sayi6=sayi6/10;
    
} while (sayi6>0);


printf("%d %d basamaklidir ve sayi degerlerinin toplami=%d 'dir\n",orjinalsayi,basamaksayisi,sayidegerlerinintoplami);

basamaksayisi=0;
sayidegerlerinintoplami=0;

printf("Devam etmek istiyor musunuz(E//e)?");
scanf(" %c",&devam);//absolutely,dont forget a tab before %c

}

else{
    printf("Lutfen pozitif bir deger giriniz...\n");
}
}

printf("Programimiz basarili bir sekilde sonuclandi...\n");

return 0;
}