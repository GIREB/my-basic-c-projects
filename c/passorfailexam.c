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
    int finalGrade;
    printf("Please,enter the final grade: \n");
    scanf("%d",&finalGrade);
    if (finalGrade>=45)
    {
        printf("Congratulations!Passed.");
    }
    else{
        printf("Failed!");
    }
    
    return 0;
}