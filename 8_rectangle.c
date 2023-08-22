#include <stdio.h>
int main()
{
   float lenght, width, area;

   printf("\n-------------------------------\n");

   printf("Enter length  : ");
   scanf("%f", &lenght);

   printf("Enter width  : ");
   scanf("%f", &width);

   area = lenght * width;
   printf("Area  of rectangle  : %f", area );

   printf("\n-------------------------------\n");
}