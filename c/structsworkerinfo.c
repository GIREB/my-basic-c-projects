#include <stdio.h>
#include <stdlib.h>

struct workersinfo
{
    char name[30];
    char surname[20];
    int startdate;
    float salary;
    int premiumnumber;
    char gender;

};

void showorkersinfo(struct workersinfo *person ){
 printf("%s\n %s\n %d\n %f\n %d\n %c\n",(*person).name,(*person).surname,(*person).startdate,(*person).salary,(*person).premiumnumber,(*person).gender);
}

int main(){
    struct workersinfo worker1;
    printf("enter worker's informaiton:");
    scanf("%s %s %d %f %d %c",worker1.name,worker1.surname, &worker1.startdate, &worker1.salary, &worker1.premiumnumber, &worker1.gender);

    printf("workers information:");
    showorkersinfo(&worker1);

    return 0;
}
