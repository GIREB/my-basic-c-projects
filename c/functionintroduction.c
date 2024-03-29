//created:27.03.2024 by Can
//contact:bayramcan1515@mail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void takimlar(){
    printf("galatasaray\n");
    printf("fenerbahce\n");
    printf("Besiktas\n");
    printf("trabzonspor\n");
}

int sayininbeskatinial(int sayi){
    //printf("%d",sayi*5);optional.
    return sayi*5;

}

float karekokunual(float sayi){
    return sqrt(sayi);
}

double karesinial(double sayi){
    return sayi*sayi;
}

char ilkharfinibas(char dizi[]){
    return dizi[5];
}

void altsatiragec(){
    printf("\n");
}

int sifirdanbuyukmu(int sayi){
    if (sayi>0)
    {
        return 0;
    }
    else if (sayi<0)
    {
        return 1;
    }
    
}

int main(){
    setlocale(LC_ALL,"Turkish");
   
   
    takimlar();
   
    printf("%d\n",sayininbeskatinial(10));
    //sayininbeskatinial(5);optional.


    printf("%f\n",karekokunual(81));


    printf("%lf\n",karesinial(100.1));


    printf("%c\n",ilkharfinibas("Can Cetin"));
    altsatiragec();



    int sayi;
    printf("Lutfen pozitif olup olmadigini ogrenmek istediginiz sayiyi giriniz...\n");
    scanf("%d",&sayi);


    if (sifirdanbuyukmu(sayi)==0)
    {
        printf("%d pozitiftir\n",sayi);
    }
    else if(sifirdanbuyukmu(sayi)==1){
        printf("%d negatiftir\n",sayi);
    }
    else{
        printf("0 ne pozitif ne de negatif bir sayidir...\n");
    }

    return 0;

}

   

