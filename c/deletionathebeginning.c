#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *start=NULL;
struct node *temp=NULL;
struct node *q=NULL;
void insert_atEnd(int userinput){
    struct node *willbeadded=(struct node*)malloc(sizeof(struct node));
    willbeadded->data=userinput;
    willbeadded->next=NULL;

    if (start==NULL)
    {
        start=willbeadded;
    }
    else{
        q=start;
        while (q->next!=NULL)
        {
            q=q->next;
        }
        q->next=willbeadded;
    }
}
void insert_atBeginning(int userinput2){
    struct node *willbeinserted=(struct node*)malloc(sizeof(struct node));
    willbeinserted->data=userinput2;
    willbeinserted->next=start;
    start=willbeinserted;
}
void insertingCertainPosition(int x,int y){
    struct node* willbeadded=(struct node*)malloc(sizeof(struct node));
    willbeadded->data=y;
    q=start;

    while (q->next->data!=x)
    {
        q=q->next;
    }
    struct node *front=(struct node*)malloc(sizeof(struct node));
    front=q->next;
    q->next=willbeadded;
    willbeadded->next=front;
}

void _count_of_nodes(struct node *q){
    int count=0;
    if (q==NULL){
    
        printf("linked is empty...\n");
        return;
    }
    struct node *currentNode=NULL;
    currentNode=q;

    while (currentNode!=NULL)
    {
        count++;
        currentNode=currentNode->next;
    }
    printf("%d",count);
}
void deletinglastnode(){
    q=start;
    while (q->next->next!=NULL)
    {
        q=q->next;
    }
    free(q->next);
    q->next=NULL;
}
void deletionatbeginning(){
    struct node* second=NULL;
    second=start->next;
    free(start);
    start=second;
}
void Print_Nodes(){
    q=start;
    while (q->next!=NULL)
    {
        printf("%d=>",q->data);
        q=q->next;
    }
    printf("%d\n",q->data);
}
int main(){
    int selection,atend,atbeginning,x,y;
    while (1)
    {
        printf("1)inserting at the end of the list\n");
        printf("2)inserting at the beginning of the list\n");
        printf("3)inserting to certain position.\n");
        printf("4)delete last node from the list...\n");
        printf("5)delete at beginning...\n");
        printf("please choose what you want to do");

        scanf("%d",&selection);
        
        switch (selection)
        {
        case 1:
            printf("please,enter value wants to insert at the end of the list...\n");
            scanf("%d",&atend);
            insert_atEnd(atend);
            Print_Nodes();
            break;
        case 2:
            printf("please enter value wants to insert at the beginning of the list...\n");
            scanf("%d",&atbeginning);
            insert_atBeginning(atbeginning);
            Print_Nodes();
            break;
        case 3:
            printf("which number will you add in front of? \n");
            scanf("%d",&x);
            printf("which mumber will you insert?\n");
            scanf("%d",&y);
            insertingCertainPosition(x,y);
            Print_Nodes();
            break;
        case 4:
            deletinglastnode();
            Print_Nodes();
            break;
        case 5:
            deletionatbeginning();
            Print_Nodes();
            break;
        }
    }
    return 0;
}