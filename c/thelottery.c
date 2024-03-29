//created:24.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
    int rastgelesayi;
    srand(time(NULL));
    int loto[49]={0};
    
    for (int i = 0; i < 6; i++)
    {
        rastgelesayi=1+rand()%49;

        while (loto[rastgelesayi-1]==1)
        {
            rastgelesayi=1+rand()%49;
        }
        
        loto[rastgelesayi-1]=1;
        printf("%d",rastgelesayi);
    }
    printf("\n");
    for (int i = 0; i < 49; i++)
    {
        if (loto[i]==1)
        {
            printf("%d",i+1);
        }
        
    }
    printf("\nSayisal loto tamamlanmistir...\n");
    
    return 0;    

}