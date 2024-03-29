#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL,"Turkish");
 
    int sayi4;

    printf("Tek mi cift mi oldugunu ogrenmek istediginiz sayiyi giriniz:\a\n");
    scanf("%d",&sayi4);

    if (sayi4%2==0)
    {
        printf("%%%d%% cifttir.",sayi4);
    }
    else if (sayi4%2!=0)
    {
        printf("\"%d\"tektir.",sayi4);
    }
    
    return 0;
}