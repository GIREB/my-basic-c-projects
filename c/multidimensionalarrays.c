#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
    int multidimensionalarray[3][2]={1,2,3,4,5,6};
    int multidimensionalarray2[3][2] ={{11,12},{13,14},{15,16}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <2 ; j++)
        {
            printf("%d",multidimensionalarray2[i][j]);
            printf("\n");
        
        }
    }
    
    return 0;
}