#include <stdio.h>
#include <stdlib.h>

//Author:Can Çetin
//Date: 4.23.2024 US format
// Function to convert temperature from Celsius to Fahrenheit
// Function to convert temperature from Fahrenheit to Celsius

float celsiusToFahrenheit(float celsius){
    return (celsius * 9/5) + 32;
}
float fahrenheitToCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}   

int main(){

    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit(celsius));

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius(fahrenheit));


for (int i = 32; i <= 212; i++)
{
    printf("%d fahrenheit is %.2f celsius\n", i, fahrenheitToCelsius(i));
}

for (int i = 0; i <=100; i++)
{
    printf("%d celsius is %.2f fahrenheit\n", i, celsiusToFahrenheit(i));
}




    return 0;

}