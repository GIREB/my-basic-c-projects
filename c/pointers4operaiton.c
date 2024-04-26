#include <stdio.h>
#include <stdlib.h>

//Date:4.26.2024
//Auuthor:Can Çetin
//Purpose:This program is a simple calculator that takes two numbers from the user and performs the four basic operations on them.

float sum(float *a,float *b){
    return *a + *b;
}
float sub(float *a,float *b){
    return *a - *b;
}
float mul(float *a,float *b){
    return *a * *b;
}
float division(float *a,float *b){
    return *a / *b;
}

int main(){

    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    
    printf("Sum of %f and %f is %f\n",a,b,sum(&a,&b));

    printf("Subtraction of %f and %f is %f\n",a,b,sub(&a,&b));

    printf("Multiplication of %f and %f is %f\n",a,b,mul(&a,&b));

    printf("Division of %f and %f is %lf\n", a, b, division(&a, &b));

    return 0;
}