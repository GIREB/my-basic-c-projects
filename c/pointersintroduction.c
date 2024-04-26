#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024 US Format
//Author:Can Çetin

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    //pointer is a variable that stores the address of another variable
    int *addressofnumber = &number;
    addressofnumber=&number;
    
    //these two lines are same,the sense of these two lines are same
    printf("Address of the number:%d \t%x \n", *addressofnumber, addressofnumber);

    printf("Address of the number:%d \t%x \n", number, &number);

    return 0;
}