#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
   setlocale(LC_ALL,"Turkish");

   int threedimensionalarray[2][2][2];

   for (int i = 0; i < 2; i++)
   {
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("%d %d %d. elemani giriniz:\n",i+1,j+1,k+1);
            scanf("%d",&threedimensionalarray[i][j][k]);
        }
    }
   }

   
   for (int i = 0; i < 2; i++)
   {
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("%d",threedimensionalarray[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
   }


   return 0;
}