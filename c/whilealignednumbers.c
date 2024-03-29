#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
  
    int sayi1;
    int sira=1;
    int toplam=0;
    printf("Lutfen kaca kadar bastirmak istediginizi giriniz...\n");
    scanf("%d",&sayi1);

int kullaniciningirdigisayi=sayi1;

while (sayi1>0)
{
     printf("%d\n",sira);
     toplam=toplam+sira;
     sira++;
     sayi1--;
}
     printf("1'den %d'a kadar olan sayilarin toplami:%d\n",kullaniciningirdigisayi,toplam);

     return 0;
}