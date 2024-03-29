#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    int satirsayisi,sutunsayisi,x3;

    printf("Kac satir istiyorsunuz?\n");
    scanf("%d",&satirsayisi);
    printf("Kac sutun istiyorsunuz?\n");
    scanf("%d",&sutunsayisi);

    int multidimensionalarray[satirsayisi][sutunsayisi];

    for (int i = 0; i < satirsayisi; i++)
    {
        for (int j = 0; i < sutunsayisi; j++)
        {
            printf("%d\n.satir ve %d.sutundaki elemani giriniz...\n",i+1,j+1);
            scanf("%d",);
        }
        
    }
    

    return 0;

    
}