#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Turkish");

int sayi,onbinler,binler,yüzler,onlar,birler;
printf("Lutfen 5 basamakli bir sayi giriniz...\a\n");
scanf("%d",&sayi);

onbinler=sayi/10000;
binler=(sayi%10000/1000);
yüzler=(sayi%1000/100);
onlar=(sayi%100/10);
birler=(sayi%10);

printf("Sayinin onbinler basamaginin sayi degeri:%d\n",onbinler);
printf("Sayinin binler basamaginin sayi degeri:%d\n",binler);
printf("Sayinin yuzler basamaginin sayi degeri:%d\n",yüzler);
printf("Sayinin onlar basamaginin sayi degeri:%d\n",onlar);
printf("Sayinin birler basamaginin sayi degeri:%d\n",birler);
printf("%d     %d     %d     %d     %d  \n",onbinler,binler,yüzler,onlar,birler);

return 0;

}