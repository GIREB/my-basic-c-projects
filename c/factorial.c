#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
     int sayi4;
     int faktoriyelsonuc=1;
     printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz...\n");
     scanf("%d",&sayi4);

     int kullaniciningirdigisayi2=sayi4;

if(sayi4>=0){
    while (sayi4>=0)
    {
        if (sayi4==0)
        {
            faktoriyelsonuc*=1;
        }
        else{
            faktoriyelsonuc*=sayi4;
        }
        sayi4--;
    }
    printf("%d! = %d",kullaniciningirdigisayi2,faktoriyelsonuc);
}
else{
    printf("Lutfen 0 veya 0'dan buyuk bir sayi giriniz...\n");
}

return 0;
}