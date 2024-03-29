#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
    int i3=1;
    int i4;
    while (i3<11)
    {
        i4 = 1;
        while(i4 < 11)
        {
            printf("%d*%d=%d      ",i3,i4,i3*i4);
            i4++;
        }
        i3++;
        printf("\n");
    }
    return 0;
}