#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
     

float sayi5,buyuk=0;
char devam;
do
{
    printf("Lutfen bir sayi giriniz..\n");
    scanf("%f",&sayi5);

    if (sayi5>buyuk)
    {
        buyuk=sayi5;
        printf("Yeni buyuk saimiz=%f\n",buyuk);
    }
    else{
        printf("Buyuk sayi hala degismedi.Buyuk sayimiz=%f\n",buyuk);
    }
    
    printf("Buyuk sayiyi hesaplamaya devam etmek istiyor musunuz?(E/e)\n");
    scanf(" %c",&devam);//before %c need a tab.

} while (devam=='e'||devam=='E');

printf("Programimiz basari ile sonuclandi...\n");

return 0;
}