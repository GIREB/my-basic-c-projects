#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024
//Auuthor:Can Çetin

//Purpose:Changing two numbers with pointers
//temp is a temporary variable that holds the value of number1
//number1 is assigned to number2
//number2 is assigned to temp
//number1 and number2 are changed

void change(int *number1,int *number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
int main(){

    int number1,number2;
    printf("Enter two numbers you want to change: ");
    scanf("%d %d",&number1,&number2);

    printf("Number1: %d\nNumber2: %d\n",number1,number2);
    printf("After changing:\n");
    change(&number1,&number2);
    printf("Number1: %d\nNumber2: %d\n",number1,number2);
}