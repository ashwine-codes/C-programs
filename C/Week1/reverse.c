#include<stdio.h>
int main(void)
{
    int number;
    int reverse=0;
    int digit;

    printf("Enter an integer:");
    scanf("%d", &number);
    
    while(number!=0)
    {
        digit = number %10; 
        reverse = (reverse*10) + digit;
        number = number /10;
    }

    printf("Reversed number= %d\n", reverse);
    return 0;
    
}