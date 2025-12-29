#include<stdio.h>
int main(void)
{
    int num; int product= 1; int digit; 

    printf("Enter a number:");
    scanf("%d", &digit); 
    num = digit; 

    for(int n=num;n>0; n--)
    {
        product = num * product; 
        num = num -1;
    }
    printf("Factorial of %d is %d\n", digit, product); 
    return 0;
}