#include <stdio.h>
#include <stdlib.h>

//DATE:4.26.2024
//Author:Can Çetin
//You should run seperately.
int main(){

    // Pointer to char array
    char *p_teams[]={"Galatasaray", "Fenerbahce", "Besiktas", "Trabzonspor", "Basaksehir"};

    for (int i = 0; p_teams[i]!='\0'; i++)
    {
        printf("%s\n", *(p_teams+i));
    }

    char countries[5][10];

    for (int i = 0; i < 5; i++)
    {
        printf("enter %d. country: ", i+1);
        scanf("%s", countries[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", countries[i]);
    }
    char *p_countries[5];
    
    for (int i = 0; i <5; i++)
    {
        p_countries[i]=&countries[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", *(p_countries[i+1]));
    }
    return 0;
    
}