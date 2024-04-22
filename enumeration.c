#include <stdio.h>
#include <stdlib.h>

//this code is written by Can Çetin
//Date:4.22.2024 US date format
//this code is written for understanding the enumeration in C programming language.
//enumeration is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.
//enumeration starts with 0 by default, but we can change it to any value.


enum week{Mon=1, Tue, Wed, Thu, Fri, Sat, Sun};
enum months{Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum seasons{Spring=1, Summer, Autumn, Winter};
enum studentschoolregistiration{active,frozen=1,graduated=1,dropout,expelled,transfered,notregistered};
enum matchresult{win=1,lose,tie};


int main(){

    printf("Monday: %d\n", Mon);
    printf("Feb: %d\n", Feb);
    printf("Spring: %d\n", Spring);
    
    enum seasons choose_season;
    choose_season=Winter;
    printf("Winter: %d\n", choose_season);


    for (int i= Mon; i <= Sun; i++)
    {
        printf("%d.Day: %d\n",i, i);
    }
    
    for (int i = Jan; i <= Dec; i++)
    {
        printf("Month: %d\n", i);
    }
    
    for (int i = Spring; i <= Winter; i++)
    {
        printf("Season: %d\n", i);
    }

    enum studentschoolregistiration registiration;
    registiration=frozen;
    
    if (registiration==0)
    {
        printf("Student can take lectures.\n");
    }
    else if(registiration==1)
    {
        printf("Student can not take lectures.\n");
    }

    enum matchresult result;
    result=win;

    if (result==1)
    {
        printf("You won the match.\n");
    }
    else if(result==2)
    {
        printf("You lost the match.\n");
    }
    else if(result==3)
    {
        printf("The match ended in a tie.\n");
    }

    return 0;
    
}