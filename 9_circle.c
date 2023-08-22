#include <stdio.h>
#define PI 3.14

int main()
{
   float redius, area;

   printf("\n-------------------------------\n");

   printf("Enter redius  :  ");
   scanf("%f", &redius);

   area = PI * redius * redius;
   printf("Area  of circle  : %f", area);

   printf("\n-------------------------------\n");
}