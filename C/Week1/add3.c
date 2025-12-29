//This is a program to add three numbers 

#include<stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("Input three floats:\n");
    scanf("%f%f%f",&a, &b, &c);
    printf("a=%f b=%f c=%f \n", a, b, c);
    sum = a + b + c;
    printf("Sum = %f\n\n", sum);
    return 0;
}