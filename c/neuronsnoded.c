#include <stdio.h>
#include <stdlib.h>

struct node
{
    int connectsneuron1;
    int connectsneuron2;
    int connetsneuron3;
    int connectsneuronx;
    struct node *link;
};
int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));

    head->connectsneuron1=18;
    head->link=NULL;
    printf("%d\n",head->connectsneuron1);

    int numofnewinfo;
    printf("please,enter how many informations you learned?");
    scanf("%d",&numofnewinfo);
    
    if (numofnewinfo>head->connectsneuron1)
    {
        head->connectsneuron1=numofnewinfo*2;
        printf("New neurons connections are:%d",head->connectsneuron1);
    }
    else{
        printf("to learn new knowledges create new neurons connections.you can think like new nodes.");
        printf("you should learn new info to increase your connections");
    }
    return 0;
}


