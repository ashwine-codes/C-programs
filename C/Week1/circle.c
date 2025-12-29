// This is a program to calculate the area and circumference of a Circle

#include<stdio.h>
#define pi 3.14159
int main()
{
    double radius, area, circumference;
    printf("Enter the radius:\n");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius; 
    printf("Radius of the circle is=%lf meters\n",radius);
    printf("Area of the circle is=%lf square meters\n", area);
    printf("Circumference of the circle is =%lf meters\n", circumference);
    return 0;
}