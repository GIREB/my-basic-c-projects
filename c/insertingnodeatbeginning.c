#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    char name[30];
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
    int selection,atend,atbeginning;
    while (1)
    {
        printf("1)inserting at the end of the list\n");
        printf("2)inserting at the beginning of the list\n");
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
        }
    }
    return 0;
}
