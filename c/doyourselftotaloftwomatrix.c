//created:26.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    int arraymatrix1[3][4];
    int arraymatrix2[3][4]={0};
    int toplam[3][4];


    printf("1. matrisin elemanlaririni girmeye basliyorsunuz...\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d. satir %d. sutundaki elemani giriniz...\n",i+1,j+1);
            scanf("%d",&arraymatrix1[i][j]);
        }
        
    }
    system("CLS");

    printf("2. matrisin elemanlaririni girmeye basliyorsunuz...\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d. satir %d. sutundaki elemani giriniz...\n",i+1,j+1);
            scanf("%d",&arraymatrix1[i][j]);
        }
        
    }
    system("CLS");

    for (int i = 0; i < 3; i++)
    
        for (int j = 0; j < 4; j++)
        
            toplam[i][j]=arraymatrix1[i][j]+arraymatrix2[i][j];
        
    
    printf("2 matrisin toplami:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
            printf("%d",toplam[i][j]);
            printf("\n");
        
        
    } 
    return 0;
}