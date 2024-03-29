#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"Turkish");

    int x=1,y=1,z,i;

    printf("%d\n%d\n",x,y);

    for (i = 0; i < 20; i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d\n",z);
    }
    
}