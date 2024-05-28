#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct workersinfo
{
    char department[50];
    long int salary;
    int year;
    char position[50];
};
struct workers
{
    char wholename[40];
    int age;
    char gender[10];
    struct workersinfo otherinfo;
};
void showorkerinfo(struct workers xx){
    printf("%s %d %s %s %ld %d %s", xx.wholename, xx.age, xx.gender, xx.otherinfo.department, xx.otherinfo.salary, xx.otherinfo.year, xx.otherinfo.position);
    printf("\n");
}
int main(){
    struct workers wholeworkers[3];

    int addworker;
    printf("enter how many workers want to add?");
    scanf("%d",&addworker);
    
    for (int i = 0; i < addworker; i++)
    {
        printf("enter %d.worker's information:",i+1);
        scanf("%s %d %s %s %ld %d %s", wholeworkers[i].wholename, &wholeworkers[i].age,wholeworkers[i].gender , wholeworkers[i].otherinfo.department, &wholeworkers[i].otherinfo.salary, &wholeworkers[i].otherinfo.year, wholeworkers[i].otherinfo.position);
    }
    printf("registered workers information:\n");

    for (int i = 0; i < addworker; i++)
    {
        showorkerinfo(wholeworkers[i]);
    }
    return 0;
}