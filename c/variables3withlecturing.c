#include <stdio.h>
int main() {
    printf( "This is a new line.\n");
    printf("This is a horizontal tab.\t");
    printf("Insert a backslash caracter\\");
    printf("calis kole.You are modern slave.\n");


//printf("This is a comment.Make more readable and explain the code.");

    printf("instruction is saying \"insert a double quote character\".\n");


//int myage=22;
// printf(myage);
//above the two lines are not possible to be applied in C language.

   int myage=22;
   printf("%d\n",myage);

//%d is a format specifier for integer which are surrounded by double quotes in printf function

   float minibusticketcost=11.25;
   printf("%f\n",minibusticketcost);

//%f is a format specifier floating point number

   printf("%c\n",initialmyname);

//%c is a format specifier for letters

   int myfavoritenumber=3;
   printf("%d\n",myfavoritenumber);

   float myfavoritedecimalnumber=0.333;
   printf("%f\n",myfavoritedecimalnumber);

   int mynum=15;
   mynum=10;
   printf("%d\n",mynum); 

//ıf  you assign a new value already existing above,you can do this.

   int myfirstnumber=1;
   int mysecondnumber=2;
   myfirstnumber=mysecondnumber;
   printf("%d\n",myfirstnumber);

//assign the value of mysecondnumber to myfirstnumber.

   int number3=12;
   int number4;
   number4=number3;
   printf("%d\n",number4);

//copy values to empty variables
   int x=5;
   int y=94;
   int toplam=x+y;
   printf("%d\n",toplam);

//to add a variale to another variable,you can use the '+' oparetor.

   int a=1,b=2,c=3;
   printf("%d\n",a+b+c);
   float clocknow=18.25;
   printf("%f\n",clocknow);

//clocknow is an identifier,which shouldn't involved special character like %,#,!

   unsigned int studentId=2210215008;
   int studentage=22;
   int studentworkhours=6;
   char studentgrade='b';
   float studentgano=2.7;



   printf("%d\n",studentId);
   printf("%d\n",studentage);
   printf("%d\n",studentworkhours);
   printf("%c\n",studentgrade);
   printf("%f\n",studentgano);


//these examples are on the real life examples,which include my personal informations.

   char ismim[] = "Can Cetin";
   printf("%s\n",ismim);

   char name[] = "Can Cetin";
   printf("%s\n", name);

//%s is a format specificer that we can  use char strings such as "Can Cetin"
//also,%s is the abbreviation of strings(sequences of characters)
//mynotes:

//Basic Data Types:
//int whole number[2or4bytes];1
//float fractional numbers[4bytes];1.99,storing 6-7 decimal digits
// double fractional numbers[8bytes];1.99,storing 15 decimal digits
//char single character [1bytes];'c'

//Basic Format Specifiers:
//%d or %i :int
//%f or %F :float
//%lf :double
//%c :char
//%s:for using the strings


    char i=65,k=66,w=67;
    printf("%c\n",i);
    printf("%c\n",k);
    printf("%c\n",w);
    char myvision[]="television";
    printf("%s\n",myvision);

 //it was a joke.
 //to store multiple characters,use strings.

    int mynumber=4646;
    printf("%d\n",mynumber);

    float yournumber=46464.4;
    printf("%f\n",yournumber);

    double mydoublenumber=3.14;
    printf("%lf\n",mydoublenumber);

    float myfloatnumber=3.14;
    printf("%.2f\n",myfloatnumber);

//you can set decimal precision by using dot(.)and then choose how many digits that should be shown

    int myİnt;
    printf("%lu\n",sizeof(myİnt));

    float myFloat;
    printf("%lu\n",sizeof(myFloat));

    double mydouble;
    printf("%lu\n",sizeof(mydouble));

    char mychar;
    printf("%lu\n",sizeof(mychar));

//we can use a format specifier as be known the %lu returned "long unsigned int" instead of "int(%d)"

    int bilinmeyen1=5;
    int bilinmeyen2=2;
    int divideboth=5/2;

    printf("%d\n",divideboth);

//thing we did is conversion one data to another data.(outputs 2)

    const float pisayisi=3.14;
    printf("%.2f\n",pisayisi);

    const char thingneverchange[]="itselfchange";
    printf("%s\n",thingneverchange);
    
    //constant means that is unchangeable.
    

     return 0;
}