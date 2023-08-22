#include <stdio.h>
int main()
{
    int age;

    printf("\n-------------------------------\n\n");

    printf("Enter The Age  :   ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }

    printf("\n\n-------------------------------\n");
}
