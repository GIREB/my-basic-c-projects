#include <stdio.h>
#include <stdlib.h>

//this code written by Can Çetin
//date:04.22.2024 US date format
//This code is written for the usage of macros in C programming language
//This code includes the usage of macros for finding the biggest number, smallest number, time, sum of numbers, difference of numbers, multiplication of numbers, division of numbers, mod of numbers, square of numbers, and checking if the entered value is a number or a character.

//The macros are defined in the following lines
#define biggestnumber(a,b) (a>b)?a:b
#define smallestnumber(a,b) (a<b)?a:b
#define saytime(withletter)(withletter==T||withletter==t)?__TIME__:"You dont want to know the time"
#define plusnumber(a,b) a+b
#define minusnumber(a,b) a-b
#define multiplynumber(a,b) a*b
#define dividenumbers(a,b) a/b
#define modnumber(a,b) a%b
#define squarenumber(a) a*a
#define numberorcharacter(a1) (a1>=48&&a1<=57)?"This is a number":"This is a character"



int main(){


    int a=5,b=10;
    printf("The biggest number is %d\n",biggestnumber(a,b));
    printf("The smallest number is %d\n",smallestnumber(a,b));


    char entercharacter;
    char T='T';
    char t='t';
    printf("DO you want to know the time? (T/t)\n");
    scanf("%c",&entercharacter);
    if (saytime(entercharacter))
    {
        printf("The time is %s\n",saytime(entercharacter));
    }
    else
    {
        printf("You dont want to know the time\n");
    }

    //The following lines are for the usage of the macros for the sum of numbers, difference of numbers, multiplication of numbers, division of numbers, mod of numbers, square of numbers
    printf("The sum of the numbers is %d\n",plusnumber(a,b));
    printf("The difference of the numbers is %d\n",minusnumber(a,b));
    printf("The multiplication of the numbers is %d\n",multiplynumber(a,b));
    printf("The division of the numbers is %f\n",dividenumbers(a,b));
    printf("The mod of the numbers is %d\n",modnumber(a,b));
    printf("The square of the number is %d%d\n",squarenumber(a),squarenumber(b));

    int a1;
    printf("Enter a number or character\n");
    scanf("%d",&a1);
    printf("%s\n",numberorcharacter(a1));

    
    return 0;
}