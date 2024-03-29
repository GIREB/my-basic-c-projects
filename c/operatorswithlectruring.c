#include <stdio.h>
int main() {

int donerayran=100+10;
printf("%d\n",donerayran);

//"+" to add together two values.
//my notes:
//Arithmetic Operators:
//"+" Addition x+y
//"-" Subtraction x-y
//"*" Multipliction x*y
//"/" Division x/y
//"%" Modulus x%y ,returns the division remainder.
//"++"Increment ++x,increase the value of a variable by 1.
//"--"Decrement --x,


int dunkalanparam=100-100;
printf("%d\n",dunkalanparam);

int carpmaislemi=8*8;
printf("%d\n",carpmaislemi);

int bolmeislemi=8/8;
printf("%d\n",bolmeislemi);

int x=8;
int y=2;
printf("%d\n",x%y);

int cebimdekipara=200;
printf("%d\n",++cebimdekipara);

int mevcutparam=201;
printf("%d\n",--mevcutparam);


//Assignment Operators:
//x=5>x=5
//x+=5,x=x+3
//x-=3,x=x-3
//x-=3,x=x*3
//x/=3,x=x/3
//x%=3,x=x%3
//x&=3,x=x&3
//x|=3,x=x|3
//x^=3,x=x^3
//x>>=3,x=x>>3
//x<<=3,x=x<<3


int sayi1=5;
sayi1*=3; 
printf("%d\n",sayi1);

int sayi2=6;
sayi2/=3;
printf("%d\n",sayi2);

float sayi3=9;//note:if you find a float number of result,you should start float function.
sayi3/=2;
printf("%.1f\n",sayi3);

int sayi4=13;
sayi4%=3;
printf("%d\n",sayi4);

int sayi5=5;
sayi5&=3;
printf("%d\n",sayi5);

int sayi6=5;
sayi6|=3;
printf("%d\n",sayi6);

int sayi7=5;
sayi7^=3;
printf("%d\n",sayi7);

int sayi8=5;
sayi8>>=3;
printf("%d\n",sayi8);

int sayi9=5;
sayi9<<=3;
printf("%d\n",sayi9);


//Comparison Operators:(TRUE:1,FALSE:0,These values are Boolean values)
//x==y,equal to,returns 1 if the values are equal.
//x!=y,not equal,returns 1 if the values are not equal
//x>y,greater than or equal to,returns 1 if the first value greater than second value.
//x<y,less than or equal to,returns 1 if the first value less than second value.


int sayi10=5;
int sayi11=5;
printf("%d\n",sayi10==sayi11);

int sayi12=5;
int sayi13=3;
printf("%d\n",sayi12!=sayi13);

int sayi14=5;
int sayi15=3;
printf("%d\n",sayi14>sayi15);

int sayi16=3;
int sayi17=5;
printf("%d\n",sayi16<sayi17);


//Logical Operators:
//&&,Logical and,x<5&&x<10(returns 1 if both statements are true)
//||,Logical or,x<5||x<4(returns 1 if one of the statements is true)
//!,Logical not,!(x<5&&x<10)(reverse the result returns 0 if the result is 1)


int sayi18=6;
int sayi19=8;
printf("%d\n",sayi18<7&&sayi19>7);

int sayi20=6;
int sayi21=3;
printf("%d\n",sayi20<5||sayi21>2);

int sayi22=5;
int sayi23=6;
printf("%d\n",!(sayi22<6&&sayi23>5));

return 0;
}