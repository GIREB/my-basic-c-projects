#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
  

     int sayi2,sayi3,toplam2=0;
     printf("Kacla kac arasindaki sayilari toplayayim.Lutfen iki sayi giriniz...\n");
     scanf("%d%d",&sayi2,&sayi3);

     int terimsayisi=abs(sayi2-sayi3)+1;
     int kucuk,buyuk;

     if (sayi2>sayi3)
     {
         kucuk=sayi3;
         buyuk=sayi2;

        while (terimsayisi>0)
        {
            printf("%d\n",sayi3);
            toplam2+=sayi3;
            sayi3++;
            terimsayisi--;
        }
     }
    else if (sayi2<=sayi3)
    {
        kucuk=sayi2;
        buyuk=sayi3;

        while (terimsayisi>0)
            {   
            printf("%d\n",sayi2);
            toplam2+=sayi2;
            sayi2+=1;
            terimsayisi--;
            }
    }
            printf("%d'den %d'ye kadar olan sayilarin toplami=%d\n",kucuk,buyuk,toplam2);

            return 0;
}