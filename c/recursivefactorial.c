#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024
//Author: Can Çetin
//Description: Recursive factorial calculation

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", factorial(n));

}