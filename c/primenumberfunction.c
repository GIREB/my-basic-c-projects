#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024 US format
//Author: Can Çetin
// Function to check prime number
// Return 1 if prime
// Return 0 if not prime

int isPrime(int n) {

    if (n==1)
    {
        return 0;
    }
    
    for ( int factor = 2; factor <=n/2; factor++)
    {
        if (n%factor == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){

    int meter=0;

    for (int i = 1; i <= 1000; i++)
    {
        if (isPrime(i)==1)
        {
            meter++;
            printf("%d is a prime number\n",i);
        }
        
    }
    printf("Total prime numbers between 1 to 1000 is %d\n",meter);

    return 0;
}