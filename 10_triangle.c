#include <stdio.h>

int main()
{
    float base, height, area;

    printf("\n-------------------------------\n");

    printf("Enter base  :  ");
    scanf("%f", &base);

    printf("Enter height :  ");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("Area of triangle   : % f  ", area);

    printf("\n-------------------------------\n");
}