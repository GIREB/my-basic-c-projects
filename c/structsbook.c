#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct books
{
    char name[50];
    char writer[50];
    int pagenumber;
    int yearpublication;
    float price;
    
}book1={"sefiller","victor hugo",1724,1862,183.35},
book2={"kürk mantolu madonna","sabahattin ali",160,1943,56},
sciencefiction[2]={{"dune","frank herbert",896,1965,18},{"fahrenheit 451","ray bradbury",208,1953,50}};


int main(){

    printf("%s %s %d %d %.2f\n",book1.name,book1.writer,book1.pagenumber,book1.yearpublication,book1.price);
    printf("%s %s %d %d %.2f\n",book2.name,book2.writer,book2.pagenumber,book2.yearpublication,book2.price);

    for (int i = 0; i < 2; i++)
    {
        printf("%s %s",sciencefiction[i].name,sciencefiction[i].writer);
        printf("\n");
    }
    
    struct books sciencefiction4[2]={{"dune","frank herbert",896,1965,18},{"fahrenheit 451","ray bradbury",208,1953,50}};
    float sumprice=0;

    for (int
     i = 0; i < 2; i++)
    {
        sumprice+=sciencefiction4[i].price;
    }
    printf("sum of 2 prices: %.2f\n",sumprice);
    
    return 0;
}
