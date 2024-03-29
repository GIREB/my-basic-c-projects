//created:23.03.2024 by Can
//contact:bayramcan1515@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");


    int sayilar[]={5,10};
    printf("%d\n%d\n",sayilar[0],sayilar[1]);

    //another way...

    int sayilar2[]={3,6,9,12,15};
    
    for (int i = 0; i < 5; i++)
    {
        while (i<=4)
        {
            printf("%d\n",sayilar2[i]);
            i++;
        }
        
    }
    return 0;
}