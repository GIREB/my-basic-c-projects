#include <stdio.h>
#include <stdlib.h>

//this code written by Can Çetin
//gmail:bayramcan1515@gmail.com.tr
//Date:4.22.2024 US date format
//This c code defines a function that finds the largest number in an array and prints it out.
//This code also defines a macro for pi.


#define yazdır printf
#define oku scanf
#define pi 3.14


void largestnumber(int array[], int size){
    int largestvalue = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > largestvalue){
            largestvalue = array[i];
        }
    }
    printf("Largest number in the array is: %d\n", largestvalue);
}



int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    largestnumber(array, size);

    yazdır("pi: %f\n", pi);

    return 0;
}