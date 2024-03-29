//created:23.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");


    float pisayisi[]={3.14,3.141,3.1415,3.14159};
    
    for (int i1= 0; i1 < 4; i1++)
    {
        while (i1<4)
        {
            printf("%.5f\n",pisayisi[i1]);
            i1++;
        }
        
        printf("\n");
    }
    int i;
    float sayilar3[7];

    for (i = 0; i <7; i++)
    {
        printf("%d. elemani giriniz...\n",i+1);
        scanf("%f",&sayilar3[i]);
    }

    for ( i = 0; i < 7; i++)
    { 
        printf("%f\n",sayilar3[i]);
    }
    
    return 0;
}