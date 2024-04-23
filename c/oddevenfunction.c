#include <stdio.h>
#include <stdlib.h>

//Date:4.23.2024 US format
//Author: Can Çetin
//Purpose: This code is written for understanding functions in C programming language.

#define yazdır printf
#define tara scanf
#define eğer if
#define değilse else
#define için for

//1.method:
void oddevencontrol(int n){
    eğer(n%2==0){
        yazdır("Even\n");
    }
    değilse{
        yazdır("Odd\n");
    }
}

//2.method:
int oddevencontrol2(int n){
    eğer(n%2==0){
        return 1;
    }
    değilse{
        return 0;
    }
}

int main(){

    oddevencontrol(3);
    oddevencontrol(4);
    

    int number;
    yazdır("Enter a number: ");
    tara("%d",&number);

    eğer(oddevencontrol2(3)==1){    
        yazdır("Even\n");
    }
    değilse{
        yazdır("odd\n");
    }


    için(int i=1;i<201;i++){
        eğer(oddevencontrol2(i)==1){
            yazdır("%d is even\n",i);
        }
        değilse{
            yazdır("%d is odd\n",i);
        }
    }
    
    return 0;

}