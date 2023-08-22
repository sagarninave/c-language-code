#include <stdio.h>
int main()
{
    int number1, number2, sum;

    printf("\n-------------------------------\n");

    printf("Enter number1 \n");
    scanf("%d", &number1);

    printf("Enter number2 \n");
    scanf("%d", &number2);

    sum = number1 * number2;
    printf("Sum : %d\n", sum);

    printf("\n-------------------------------\n");
}