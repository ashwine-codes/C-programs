#include<stdio.h>
int main(void)
{
    int number;
    int sum=0;
    int digit; 

    printf("Enter an integer:");
    scanf("%d",&number);

    while(number!=0)
    {
        digit = number %10; 
        sum = sum+digit; 
        number = number/10;

    }
    printf("Sum of digits=%d\n", sum);
    return 0;
}