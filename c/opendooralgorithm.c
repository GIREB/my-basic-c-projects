#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//date:4/20/2024
//this code is written by Can Çetin
//purpose of this code is to open or close the doors that are multiples of the tour number 
//the code will open the doors that are multiples of the tour number
//the code will close the doors that are not multiples of the tour number
//for example if the door number is 2, then the doors that are multiples of 2 will be opened if they are closed
//the code will open or close the doors for 10 rounds
//the code will print the doors that are opened at the end of the 10 rounds
//the code will print the doors that are closed at the end of the 10 rounds


int main() {

setlocale(LC_ALL,"Turkish");

int open[10]={0};
int round,door;

for (round  = 0; round < 10; round++)
{
    for (door  = round; door < 10;door=door+round+1)
    {
        open[door]=!open[door];
    }
    
}

printf("Opened doors are:\n");

for (door = 0; door < 10; door++)
{
    if (open[door])
    {
        printf("%d\n",door+1);
    }
}
return 0;
}
    

