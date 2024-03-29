#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    char karakter;

    printf("Bize bir karakter soyle sana onun ASCII degerini soyleyeyim...\n");
    scanf("%c",&karakter);
    printf("%c'nin ASCII degeri:%d",karakter,karakter);

    //65-90 büyük harfler
    //97-122 küçük harfler

    int karakterinASCIIdegeri;

    if (karakterinASCIIdegeri>=65&&karakterinASCIIdegeri<=90)
    {
        printf("%d buyuk bir harftir.",karakterinASCIIdegeri);
    }
    else if (karakterinASCIIdegeri>=97&&karakterinASCIIdegeri<=122)
    {
        printf("%d kucuk bir harftir.",karakterinASCIIdegeri);
    }
    else{
        printf("Lutfen A-Z ya da a-z arasinda bir karakter giriniz.\n");
    }

    
    return 0;
}