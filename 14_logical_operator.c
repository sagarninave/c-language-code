#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("\n-------------------------------\n");

    // operater(&&)
    bool and1 = true, and2 = false;
    printf("\nLogical AND : %d ", and1 && and2);

    bool and3 = true, and4 = true;
    printf("\nLogical AND : %d ", and3 && and4);

    bool and5 = false, and6 = false;
    printf("\nLogical AND : %d ", and5 && and6);

    bool and7 = false, and8 = true;
    printf("\nLogical AND : %d \n", and7 && and8);

    // operater (||)
    bool or1 = true, or2 = false;
    printf("\nLogical OR : %d \n", or1 || or2);

    bool or3 = true, or4 = true;
    printf("Logical OR : %d \n", or3 || or4);

    bool or5 = false, or6 = false;
    printf("Logical OR : %d \n", or5 || or6);

    bool or7 = false, or8 = true;
    printf("Logical OR : %d \n", or7 || or8);

    // operater (!)
    bool not1 = true, not2 = true;
    printf("\nLogical NOT : %d ", !(not1 && not2));

    bool not3 = false, not4 = false;
    printf("\nLogical NOT : %d ", !(not3 && not4));

    bool not5 = true, not6 = false;
    printf("\nLogical NOT : %d ", !(not5 && not6));

    bool not7 = false, not8 = true;
    printf("\nLogical NOT : %d \n", !(not7 && not8));

    printf("\n-------------------------------\n");
}
