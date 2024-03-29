#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){

    setlocale(LC_ALL,"Turkish");
/*int i;
for ( i = 0; i < 10; i++)
{
    if (i%2==0)
    {
        printf("%d\n",i);
       continue;
    }
    else{
         printf(">>>>>%d<<<<<\n",i);
    }
    
}
//for loop is more practical the others because you can assign,operate mathematical operations and determine condition.

int i2;
for ( i2 = 1; i2 < 20 && i2>0; i2=i2*2)
{
    if (i2%2==0)
    {
    printf("%d\n",i2);
    continue;
    }
    double r=pow(i2,i2);
    printf("%lf\n",r);
}
double sayi1=2,sayi2=5;
double sonuc=pow(sayi1,sayi2);//pow operations
printf("%.2lf ussu %.2lf=%.2lf\n",sayi1,sayi2,sonuc);

int sayac=100;
for (; sayac >0; sayac--)
{

}
printf("%d\n",sayac);



int sayi3;
printf("Girdiginiz sayi ile 0  arasinda kalan 5'e bolunebilen sayilari bastiralim...\n");
printf("Lutfen bir sayi giriniz...\n");
scanf(" %d",&sayi3);

if (sayi3>=0)
{
    for (int i3=0; sayi3 >i3; i3+=5)
    {
        printf("%d\n",i3);
    }
    
}
else{
    for (int i3=0 ; sayi3< i3; i3-=5)
    {
        printf("%d\n",i3);
    }

}

int toplam=0,sayi4;
printf("0 ile girdiginiz sayi arasindaki sayilari toplayan programa hosgeldiniz.Lutfen bir sayi giriniz...\n");
scanf("%d",&sayi4);

if (sayi4>0)
{
    for (int i4 = 0; i4 <= sayi4; i4++)
    {
        toplam+=i4;
    }
}    
 else{
    for (int i4 = 0; i4 >= sayi4;i4--)
    {
        toplam+=i4;
    }
    
 }
printf("0'dan %d'ye kadar olan sayilarin toplami:%d\n",sayi4,toplam);

int biletsayisi=100;
char biletal;
for (; 0 < biletsayisi; )
   {
    printf("Bilet almak ister misiniz(E/e)?\n");
    scanf(" %c",&biletal);
    if (biletal=='e'||biletal=='E')
    {   
        int alinanbiletsayisi;
        printf("Kac tane bilet almak istiyorsunuz?\n");
        scanf("%d",&alinanbiletsayisi);

    if (alinanbiletsayisi<=biletsayisi)
    { 
        biletsayisi-=alinanbiletsayisi;
    }

    else{
        printf("Lutfen alinabilecek bilet sayisina gore bilet aliniz...\n");
    }
        printf("Alinabilecek toplam bilet sayisi:%d\n",biletsayisi);
    }
    else{
       break;      
        }

        if (biletsayisi==0)
        {
            printf("Alinan bilet sayisi:%d\n",100-biletsayisi);
            printf("Biletler tukendi...\n");
        }
        else{
            printf("Alinan bilet sayisi:%d\n Kalan bilet sayisi:%d\n",100-biletsayisi,biletsayisi);
        }
   }*/


   int forI,whileI,dowhileI;

   for ( forI=1; forI <= 10; forI++)
   {
    printf("%d",forI);
   }

printf("\n");

   whileI=1;
   while (whileI<=10)
   {
    printf("%d",whileI);
    whileI++;
   }

   printf("\n");
   
   dowhileI=1;
   do
   {
    printf("%d",dowhileI);
    dowhileI++;
   } while (dowhileI<=10);
   

   
   return 0;
}