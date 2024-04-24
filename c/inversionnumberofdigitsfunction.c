#include <stdio.h>
#include <stdlib.h>

//date:4.24.2024
//author: Can Çetin
// Function to find the number of digits in a number
// Returns the number of digits in the number

int findnumberofdigits(int number){
    int numberofdigits = 0;
    do
    {
        number = number/10;
        numberofdigits++;
    } while (number>0);
    
    
    return numberofdigits;
}
int reverse(int number){
    
      int ourdigitnumber = findnumberofdigits(number);
      int array[ourdigitnumber];

      int numberofdigits = 0;
        do
        {
            numberofdigits++;
            array[numberofdigits-1] = number%10;
            number = number/10;
            
        } while (number>0);

        float reversednumber = 0;
        for (int i = 0; i < ourdigitnumber; i++)
        {
            reversednumber = reversednumber+array[i]*pow(10,ourdigitnumber-i-1);
        }
        return reversednumber;
    }

int main(){

    int number;
    printf("Enter the number you want to find the inversion number:\n");
    scanf("%d",&number);

    printf("The inversion number of %d is %d\n",number,reverse(number));

    
    return 0;
}