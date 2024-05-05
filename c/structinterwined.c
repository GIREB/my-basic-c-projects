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
int main(){
    struct workers worker1;

    strcpy(worker1.wholename,"Can Çetin");
    worker1.age=22;
    strcpy(worker1.gender,"e");
    strcpy(worker1.otherinfo.department,"Electric and electronic engineering");
    worker1.otherinfo.salary=60000;
    worker1.otherinfo.year=2;
    strcpy(worker1.otherinfo.position,"product management");

    printf("%s\n %d\n %s\n %s\n %ld\n %d\n %s\n",worker1.wholename,worker1.age,worker1.gender,worker1.otherinfo.department,worker1.otherinfo.salary,worker1.otherinfo.year,worker1.otherinfo.position);




    
    
}
