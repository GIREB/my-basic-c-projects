#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Turkish");


float a,b,c,x;

printf("Sirasiyla a,b,c ve x degiskenlerini giriniz.\n");
scanf("%f%f%f%f", &a, &b, &c, &x);

float sonuc=a*x*x + b*x + c;

printf("Denklemin sonucu=%d\n",(int)sonuc);

return 0;
}