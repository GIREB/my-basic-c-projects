#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;
struct node* q=NULL;

void add_atEnd(int userinput){
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
  void Print_nodes()
    {
        q=start;
        while (q->next!=NULL)
        {
            printf("%d=>",q->data);
            q=q->next;
        }
        printf("%d\n",q->data);
    }
    int main(){
        while (1)
        {
        int inputofuser;
        printf("please,enter a count which wants to add at the end of node...");
        scanf("%d",&inputofuser);
        add_atEnd(inputofuser);
        Print_nodes();  
        }
        return 0;
    }
