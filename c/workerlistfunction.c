#include <stdio.h>
#include <stdlib.h>

//Date:4.23.2024 US Format
//this code is written by Can Çetin
//contact:bayramcan1515@gmail.com
// Function to print the list of workers

#define yazdır printf
#define oku scanf

void workerlist(char workersname[5][30],int dimension){
    for(int i=0;i<5;i++){
        yazdır("%s\n",workersname[i]);
    }
}

int main(){

    char workersname[5][30] ={"ali","veli","ayse","fatma","hayriye"};
    workerlist(workersname,5);
    

    return 0;
}