#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");

    printf("Lutfen boyunuzu cm cinsinden giriniz...\n");
    scanf("%f",&boy);
    
    if ((cinsiyet=='E'||cinsiyet=='e')&&boy>=160){
        printf("Tebrikler boy mulakatini gectiniz!");
    }
    else if ((cinsiyet=='E'||cinsiyet=='e')&&boy>=150)
    {
        printf("Tebrikler boy mulakatini gectiniz!");
    }
    else{
        printf("Maalesef elendiniz.");
    }

    return 0;
}