#include <stdio.h>
#include <stdlib.h>

//Date:4.24.2024
//Author: Can Çetin
//Purpose: This program is a simple program that converts the average of the student to the quadrant grading system.

int notesystem(int average){
    if (average>90)
    {
        return 4;
    }
    else if (average>80)
    {
        return 3;
    }
    else if (average>70)
    {
        return 2;
    }
    else if (average>60)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
     
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        int average=100-(i*10)+rand()%10;
        printf("Student's average:%d\n",average);
        printf("%d score corresponds in quadrant grading system:%d\n",average,notesystem(average));
    }

}