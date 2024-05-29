#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  fatihfetih
{
    int date;
    char location[20];
    char sultan[40];
    int anniversary;
    int siege;
    struct fatihfetih *link;
};
void print_data(struct fatihfetih *head){
    if (head==NULL){
    printf("linked list is empty.\n");
    return;
    }
    struct fatihfetih *sahi=NULL;
    sahi = head;
    while (sahi!=NULL)
    {
        printf("%d\n",sahi->date);
        printf("%s\n",sahi->location);
        printf("%s\n",sahi->sultan);
        printf("%d\n",sahi->anniversary);
        printf("%d\n",sahi->siege);
        sahi=sahi->link;
    }
}
int main(){

    struct fatihfetih *head=NULL;
    
    head=(struct fatihfetih*)malloc(sizeof(struct fatihfetih));

    head->date=2951453;
    strncpy(head->location,"Konstantinopolis", sizeof(head->location)-1);
    strncpy(head->sultan," Sultan Mehmed", sizeof(head->sultan)-1);
    head->anniversary=571;//also 571 is birth date of prophet Muhammed.I wanted to say.
    head->siege=53;
    head->link=NULL;

    print_data(head);
    free(head);
    return 0;
}