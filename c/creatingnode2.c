#include <stdio.h>
#include <stdlib.h>

struct creatingnode2
{
    int mydata;
    struct creatingnode2 *link;
};
int main(){
    struct creatingnode2 *head;
    head=(struct creatingnode2*)malloc(sizeof(struct creatingnode2));

    struct creatingnode2 *myptr;
    myptr=(struct creatingnode2*)malloc(sizeof(struct creatingnode2));
    
    head->mydata=3;
    head->link=myptr;

    myptr->mydata=1;
    myptr->link=NULL;
    printf("%d %d",head->mydata,myptr->mydata);
    return 0;
}
