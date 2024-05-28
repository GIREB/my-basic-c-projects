#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct qualifications{
    char uniname[20];
    char degree[15];
    float GPA;
    char internship[25];
    char Englishlevel[5];
    char certificates[50];
    char secondlanguage[20];
    char projects[100];
    char tecnexperiences[100];
    ;
}students;
 
int main(){
    students student1;
    
    strcpy(student1.uniname,"Karabuk University");
    strcpy(student1.degree,"bachelor degree");
    student1.GPA=3.6;
    strcpy(student1.internship,"TUBITAK");
    strcpy(student1.Englishlevel,"C1");
    strcpy(student1.certificates,"python c c++");
    strcpy(student1.secondlanguage,"Arabic");
    strcpy(student1.projects,"Human DNA project");
    strcpy(student1.tecnexperiences,"Teknofest");

    
    printf("please enter the GPA:");
    double GPAstudent;
    scanf("%lf",&GPAstudent);
    
    
    if (GPAstudent>=student1.GPA)
    {
        printf("congratulations!you passed this stage\n");
    }
    else if (GPAstudent<=student1.GPA)
    {
        printf("you failed!");
    }
    
    else{
        printf("enter between 0-4\n");
    }
    
    char EnglishLevel[5];
    printf("please,enter your English Level \nA1/A2/B1/B2/C1/C2\n");
    scanf("%s",EnglishLevel);

    if (strcmp(student1.Englishlevel, "C1") == 0)
    {
        printf("congratulations!you passed this stage");
    }
    else{
        printf("you failed!");
    }
    
    return 0;
}


