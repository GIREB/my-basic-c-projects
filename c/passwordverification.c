//created:25.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
    char sifre[80];
    char dogrulama[80];
    int i;
    int yanlis;

    while (1)//infinite loop...until put break.
    {
        yanlis=0;
        i=0;
        printf("Lutfen parolanizi giriniz...\n");
        scanf("%s",sifre);
        printf("Parolanizi tekrar giriniz...\n");
        scanf("%s",dogrulama);

        while (!(sifre[i]=='\0'&& dogrulama[i]=='\0'))//query until he loop end.
        {
            if (sifre[i]!=dogrulama[i])
            {
                printf("Hatali giris yaptiniz,lutfen 1. ve 2. sifrenin aynisini giriniz..\n");
                yanlis=1;
                break;
            }
            else{
                i++;
            }
        }
        if (yanlis==0)
            {
                printf("Sifrelerinizin her isiki de eslesti...\nKaydiniz tamamlandi...\n");
                break;
            }
    }
    return 0;
}