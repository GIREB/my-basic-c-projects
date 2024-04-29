#include <stdio.h>
#include <string.h>

void myreverse(char *str){
    if(*str){
        myreverse(str+1);
        printf("%c",*str);
    }
}
int main(){
    while (1)
    {
    printf("enter string:\n");
    char str[100];
    gets(str);
    myreverse(str);
    }
    printf("\n");
    return 0;
}