#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myinfo{
    char name[20];
    int age;
    char myscollge[20];
    char mydepartment[20];
    char mystudentid[20];
};

int main(){

    struct myinfo me;

    strcpy(me.name,"Can Çetin");
    me.age = 22;
    strcpy(me.myscollge,"Karabuk University");
    strcpy(me.mydepartment,"Electrical Engineering");
    strcpy(me.mystudentid, "16011010");

    printf("%s\n%d\n%s\n%s\n%s",me.name,me.age,me.myscollge,me.mydepartment,me.mystudentid);

    return 0;
}



