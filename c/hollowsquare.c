#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int x,y,satir;
    printf("Lutfen satir sayisini giriniz...\n");
    scanf("%d",&satir);

    for ( x= 1; x<=satir; x++)
    {
        for (y= 1; y <= satir; y++)
        {
            if (x==1 || x==satir || y==satir || y==1)
            {
               printf("*");
            }  
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
           
    return 0;
}