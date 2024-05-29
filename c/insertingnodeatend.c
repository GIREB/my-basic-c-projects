#include <stdio.h>
#include <stdlib.h>

//inserted data is 1453(constantinopolis conquest)
//initialized data in main function is 1329(palekanon victory)

struct insertingnodeatend
{
    int addedneuron;
    struct insertingnodeatend *link;
};
void insert_node_at_End(struct insertingnodeatend *head,int addedneuron){
    struct insertingnodeatend *myptr,*temp;
    myptr=head;
    temp=(struct insertingnodeatend*)malloc(sizeof(struct insertingnodeatend));

    temp->addedneuron=addedneuron;
    temp->link=NULL;
    if (myptr==NULL)
    {
        myptr=temp;
    }
    else{
        while (myptr->link!=NULL)
    {
        myptr=myptr->link;
    }
    myptr->link=temp;
    }
}
void print_count_of_Neurons(struct insertingnodeatend *head){
    struct insertingnodeatend *myptr;
    myptr=head;

    while (myptr!=NULL)
    {
        printf("%d\n",myptr->addedneuron);
        myptr=myptr->link;
    }
}
int main(){
    struct insertingnodeatend *head=NULL;
    head=(struct insertingnodeatend*)malloc(sizeof (struct insertingnodeatend));
    head->addedneuron=1329;
    head->link=NULL;

    insert_node_at_End(head,1453);
    print_count_of_Neurons(head);
}
