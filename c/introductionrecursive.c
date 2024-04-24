#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024
//Author: Can Çetin
// Recursive function to find the sum of natural numbers from 1 to n
int sum(int n){
    if(n == 0){
        return n;
    }else{
        return n + sum(n-1);
    }
}

int main(){

    int n;
    printf("Entera positive integer: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

}