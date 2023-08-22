#include <stdio.h>
int main()
{
    printf("\n-------------------------------\n");

    // use equal to operater
    int equal1 = 180, equal2 = 699;
    printf("\nEqual : %d", equal1 == equal2);

    int equal3 = 10, equal4 = 10;
    printf("\nEqual : %d\n\n", equal3 == equal4);

    // use not equal to (!=) operater
    int not_equal1 = 9, not_equal2 = 9;
    printf("Not equal : %d\n", not_equal1 != not_equal2);

    int not_equal3 = 5, not_equal4 = 8;
    printf("Not equal : %d\n\n", not_equal3 != not_equal4);

    // use greater than operater(>)
    int greater1 = 16, greater2 = 18;
    printf("Greater Than : %d\n", greater1 > greater2);

    int greater3 = 18, greater4 = 15;
    printf("Greater Than : %d\n\n", greater3 > greater4);

    // use less than operater(<)
    int less1 = 16, less2 = 1;
    printf("Less Than : %d\n", less1 < less2);

    int less3 = 18, less4 = 100;
    printf("Less Than : %d\n\n", less3 < less4);

    // use greater than equal to operater (>=)
    int greater5 = 18, greater6 = 69;
    printf("Greater Than Equal To : %d\n", greater5 >= greater6);

    int greater7 = 50, greater8 = 18;
    printf("Greater Than Equal To : %d\n\n", greater7 >= greater8);

    // use less than equal to operater (<=)
    int less5 = 550, less6 = 152;
    printf("Less Than Equal To : %d\n", less5 <= less6);

    int less7 = 180, less8 = 699;
    printf("Less Than Equal To : %d\n", less7 <= less8);

    printf("\n-------------------------------\n");
}
