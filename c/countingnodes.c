#include <stdio.h>
#include <stdlib.h>

struct node
{
    float floride;
    float bicarbonate;
    float chloride;
    float sulfate;
    float calcium;
    float magnesium;
    float potassium;
    float sodium;
    struct node *link;
};
void _count_of_nodes(struct node *head){
    int count=0;
    if (head==NULL){
    
        printf("linked is empty...\n");
        return;
    }
    struct node *currentNode=NULL;
    currentNode=head;

    while (currentNode!=NULL)
    {
        count++;
        currentNode=currentNode->link;
    }
    printf("%d",count);
    
}
int main(){
    struct node *head=NULL;
    struct node *anions=NULL;
    struct node *cations=NULL;
    head = (struct node*)malloc(sizeof(struct node));
    anions=(struct node*)malloc(sizeof(struct node));
    cations=(struct node*)malloc(sizeof(struct node));
    head->floride=0.26;
    head->bicarbonate=1400;
    head->chloride=40.7;
    head->sulfate=22.6;
    head->link=anions;
    anions->calcium=288.87;
    anions->magnesium=36.20;
    anions->potassium=8.23;
    anions->sodium=40.04;
    anions->link=cations;
    cations->link=NULL;
    _count_of_nodes(head);
    free(head);
    free(anions);
    free(cations);
    return 0;
}
