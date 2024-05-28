#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//EOF end of file of chars
//FEOF end of char arrays
int main(){

    FILE *myfile;
    int stock[50];
    char productname[50];
    char productCountry[50];
    
    int index=0;
    if ((myfile=fopen("C:\\Users\\bayra\\OneDrive\\Masaüstü\\filereadingoperation\\mynew4.txt","r"))!=NULL)
    {
        while (!feof(myfile))
        {
            fscanf(myfile,"%d %s %s",&stock[index],&productname[index],&productCountry[index]);
            index++;
        }
        
        for (int i = 0; i < index; i++)
        {
            printf("%d. product\t %d\n  %s\n %s",i+1,stock[i],&productname[i],&productCountry[i]);
        }
        printf("\n");
    }
    else{
        printf("file couldnt find on the system...");
    }
    fclose(myfile);
    return 0;

}