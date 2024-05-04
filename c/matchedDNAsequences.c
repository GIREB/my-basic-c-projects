#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myDNA(char *str){
    if(*str!='\0'){
        myDNA(str+1);
        if(*str=='A'){
            printf("T");
        }
        else if(*str=='T'){
            printf("A");
        }
        else if(*str=='C'){
            printf("G");
        }
        else if(*str=='G'){
            printf("C");
        }
    }
}

int main(){
    while (1)
    {
        printf("enter DNA sequence:\n");
        char str[50];
        fgets(str, 50, stdin); 
        str[strcspn(str, "\n")] = 0; 
        myDNA(str);
        printf("\n");
    }

    return 0;
}