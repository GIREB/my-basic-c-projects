#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//a:append
//w:write
//author:Can Çetin
//Date:08.05.2024
//this code covers operations which write to file.
int main(){
    FILE *addressoffile;


addressoffile=fopen("C:\\Users\\bayra\\OneDrive\\Masaüstü\\fileoperaiton\\my.txt","a");

fputc('c',addressoffile);
fprintf(addressoffile,"\n");
fputs("programming\n",addressoffile);
fputs("Language\n",addressoffile);


char name[10];
printf("enter your name...\n");
fgets(name,10,stdin);

fprintf(addressoffile,"your name:%s",name);
int number1,number2;
printf("enter two number...\n");
scanf("%d %d",&number1,&number2);

int mypow;
mypow=pow(number1,number2);

fprintf(addressoffile,"%d pow of %d :%d",number2,number1,mypow);



fclose(addressoffile);

return 0;
}
