#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");
  
   int mynumber;
    printf("Please,enter the positive or negative integer number \n");
    scanf("%d",&mynumber);
    if(mynumber>0){
       printf("number is positive...\n");
    }
    else{
        printf("Number is negative...\n");
    }
    return 0;
}