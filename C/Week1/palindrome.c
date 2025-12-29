#include<stdio.h>
int main(void)
{
    int number; int originalNumber;
    int reversedNumber=0;
    int remainder;

    /*Read input from user*/
    printf("Enter an integer:");
    scanf("%d",&number);
    originalNumber = number;

    /*Reverse the number*/
    while(number!=0)
    {
        remainder = number%10;
        reversedNumber= (reversedNumber*10) + remainder; 
        number = number/10;
    }

    /*Check if palindrome*/
    if(originalNumber == reversedNumber)
    {
        printf("%d is a palindrome number.\n",originalNumber);

    }
    else
    {
        printf("%d is not a palindrome number.\n", originalNumber);
    }
    return 0;
}