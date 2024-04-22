#include <stdio.h>
#include <stdlib.h>

//this code written by Can Çetin
//this code is for keeping student names in a 2D array and printing them out.
//this code is written for 2 classes and 5 students in each class.


int main(){
    
    char student[2][5][20];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            printf("Enter student name: ");
            scanf("%s", student[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            
            printf("%d.class %d.student: %s\n", i+1, j+1, student[i][j]);
    }

    return 0;

    }
}

