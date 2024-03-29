#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {

    setlocale(LC_ALL,"Turkish");
 
    int secim;

    printf("Lutfen seciminizi yapiniz...\n");
    printf("1.ilkbahar\n2.yaz\n3.sonbahar\n4.kis\n");
    scanf("%d",&secim);


    switch (secim)
    {
    case 1:
    printf("Hava cok guzel...");
    break;
    case 2:
    printf("Hava cok sicak...");
    break;
    case 3:
    printf("Hava yagmurlu...");
    break;
    case 4:
    printf("Hava karli...");
    break;
    default:
    printf("Lutfen 1-4 arasinda bir secim yapiniz...");
       
    }
    
    return 0;
}