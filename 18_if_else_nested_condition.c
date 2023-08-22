#include <stdio.h>
int main()
{
    int age, isVoterId;

    printf("\n-------------------------------\n\n");

    printf("Enter The Age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Do you have voter id, 0 for no/1 for yes: ");
        scanf("%d", &isVoterId);

        if (isVoterId == 0 || isVoterId == 1)
        {
            if (isVoterId == 1)
            {
                printf("You are eligible to vote, voter id is available.");
            }
            else
            {
                printf("You are eligible to vote, voter id is not available.");
            }
        }
        else
        {
            printf("Invalid Choice.");
        }
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    printf("\n\n-------------------------------\n");
}