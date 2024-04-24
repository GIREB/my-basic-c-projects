#include <stdio.h>
#include <stdlib.h>


//Date:4.24.2024
//Author:Can Çetin
//Purpose:To write a program that calculates the factorial of a number using both iterative and recursive functions.

//iterative function
int factorial(int n) {
    int i, result = 1;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

//recursive function
int factorialrecursive(int n){
    if (n<=1)
    {
        return 1;
    }
    else{
        return n*factorialrecursive(n-1);
    }
    
}

int main(){

    printf("Factorial of 5 is %d\n", factorial(5));
    printf("Factorial of 5 is %d\n", factorialrecursive(5));
}