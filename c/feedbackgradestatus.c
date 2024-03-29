#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    int puan;
    printf("lutfen puaninizi giriniz:\n");
    scanf("%d",&puan);
    if(puan>=80&&puan<=100){
        printf("Baya iyisin.Boyle devam et.n");
    }
    else if(puan>=60&&puan<=80){
        printf("iyisin ama daha iyi olabilir.Odaklan.\n");   
    }
    else if(puan>=40&&puan<60){
        printf("Vasat durumdasin. Daha cok calismalisin.\n");

    }
   else if(puan>=20&&puan<40){
    printf("Kotusun cok calisman lazim.Calis kole.\n");
   }
    else if(puan>=0&&puan<=20){
    printf("Anana babana yazik.Bosa masraf cikariyon.\n");
    }
    else {
        printf("Lutfen 0--100 arasinda bir deger giriniz:\n");
    }
    return 0;
}