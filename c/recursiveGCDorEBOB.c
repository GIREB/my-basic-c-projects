#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024
//Author: Can Çetin
//Description: Recursive GCD calculation

int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}

int main(){

    while (1)
    {
        int a, b;
        printf("Enter two positive integers: ");
        scanf("%d %d", &a, &b);

        if(a == 0 || b == 0){
            printf("Exiting...\n");
        }

        printf("GCD = %d\n", gcd(a, b));
    }
return 0;
}