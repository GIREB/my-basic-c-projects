#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024
//Author:Can Çetin
// Function to check if a number is perfect
// A perfect number is a positive integer that is equal to the sum of its proper divisors

int isPerfect(int n) {
    int sum = 1;

    if (n==1)
    {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {

    for (int i = 0; i < 10000; i++)
    {
        if (isPerfect(i)==1)
        {
            printf("%d is a perfect number.\n", i);
        }
    }
    int n;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (isPerfect(n)) {
            printf("%d is a perfect number.\n", n);
        } else {
            printf("%d is not a perfect number.\n", n);
        }
        printf("if you want to exit press 0\n");
    }
    if (n == 0)
    {
        printf("Exiting the program...\n");
    }
    return 0;
}