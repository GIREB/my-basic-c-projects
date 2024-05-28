#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char secuence1[10];
    char secuence2[10];
    char secuence3[10];
    struct node *link;
};

int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    
    strncpy(head->secuence1, "ATGSSSTGA", sizeof(head->secuence1) - 1);
    head->secuence1[sizeof(head->secuence1) - 1] = '\0';
    head->link=NULL;


    printf("%s",head->secuence1);
    
}
