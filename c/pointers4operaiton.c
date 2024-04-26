#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024
//Author:Can Çetin
// This program is to understand the pointer operation in C

int main(){

    int x,y=0;
    int *a1,*a2=&y;

    a1=a2;
    x=++(*a2);
    *a2=*a1+x;

    printf("%d %d %d %d\n",x,y,*a1,*a2);

    return 0;
}