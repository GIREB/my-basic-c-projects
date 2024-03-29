#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {

    setlocale(LC_ALL,"Turkish");
 
    
    int ayinnumarasi;
    char ayinmevsimi;
    int gecerligiris=0;
   


while (!(gecerligiris=0))
{
    
 printf("Lutfen ogrenmek istediginiz ayi giriniz...\n");
    scanf("%d",&ayinnumarasi);


  if (ayinnumarasi<=12&&ayinnumarasi>0)
    {
    switch(ayinnumarasi)
    {
case 1:
        printf("%d numarali ay:Ocak\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 2:
        printf("%d numarali ay:Subat\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 3:
        printf("%d numarali ay:Mart\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 4:
        printf("%d numarali ay:Nisan\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 5:
        printf("%d numarali ay:Mayis\n",ayinnumarasi);
        ayinmevsimi='i';
        break;
case 6:
        printf("%d numarali ay:Haziran\n",ayinnumarasi);
        ayinmevsimi='y';
        break;
case 7:
        printf("%d numarali ay:Temmuz\n",ayinnumarasi);
        ayinmevsimi='y';
        break;
case 8:
        printf("%d numarali ay:Agustos\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
case 9:
        printf("%d numarali ay:Eylul\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 10:
        printf("%d numarali ay:Ekim\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 11:
        printf("%d numarali ay:Kasim\n",ayinnumarasi);
        ayinmevsimi='s';
        break;
case 12:
        printf("%d numarali ay:Aralik\n",ayinnumarasi);
        ayinmevsimi='k';
        break;
    }
  }

else{
    printf("Lutfen 1-12 arsainda bir sayi giriniz:\n");
}

}
    return 0;

}