//created:26.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    int arraymatrix[3][4]={{1,5,2,3},{4,6,7,8},{9,5,4,3}};
    int arraymatrix2[3][4]={{12,10,20,12},{1,2,3,8},{9,45,2,0}};

    int toplam[3][4];

    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
            printf("%d\t",arraymatrix[i][j]);
            printf("\n"); 
    }*/

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
            printf("%d\t",arraymatrix2[i][j]+arraymatrix[i][j]);//you can do any operation.
            printf("\n");   
    }

   /* for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
            toplam[i][j]=arraymatrix2[i][j]+arraymatrix[i][j];//assignment.
        
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
            printf("%d\t",toplam[i][j]);
            printf("\n");
        
        
    }*/
    return 0;
}