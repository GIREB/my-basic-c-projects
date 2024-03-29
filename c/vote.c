#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
    int yas;
    int resit=18;
    int yilbekle;
    printf("Lutfen yasinizi giriniz...\n");
    scanf("%d",&yas);
    if(yas>=18) {
       printf("Oy kullanabilirsiniz.\n");
    }
    else{
    printf("Oy kullanamazsiniz\n");
    yilbekle=resit-=yas;
    printf("Beklemeniz gereken yil:%d\n",yilbekle);
    }

    return 0;
}