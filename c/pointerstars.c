#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024
//Author:Can Çetin
//crucial point: we are passing the address of the variable to the function

void printstars(int *universe){
    for(int i=0;i<*universe;i++){
        printf("*");
    }
    printf("\n");
}
int main(){

    int numofstars;
    printf("Enter the number of stars you want to print: ");
    scanf("%d",&numofstars);
    //in bottom line, assigns the address of numofstars to the pointer variable
    printstars(&numofstars);
}
