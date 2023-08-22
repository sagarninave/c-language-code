#include <stdio.h>
int main()
{
    printf("\n-------------------------------\n");

    // Addition
    int add1 = 10, add2 = 22, addition;
    addition = add1 + add2;
    printf("\nAddition : %d\n\n", addition);

    // substraction
    int sub1 = 10, sub2 = 10, substraction;
    substraction = sub1 - sub2;
    printf("Substraction : %d\n\n", substraction);

    // multiplication
    int multi1 = 9, multi2 = 7, multiplication;
    multiplication = multi1 * multi2;
    printf("Multiplication: %d\n\n", multiplication);

    // divison
    int div1 = 90, div2 = 5, divison;
    divison = div1 / div2;
    printf("Divison : %d\n\n", divison);

    // modulus
    int mod1 = 10, mod2 = 15, modulus;
    modulus = mod1 % mod2;
    printf("Modulus : %d\n\n", modulus);

    // increment
    int increment = 8;
    printf("Actual Value : %d\n", increment);

    increment++;
    printf("Increment ++ : %d\n", increment);

    ++increment;
    printf("++ Increment : %d\n\n", increment);

    // decrement
    int decrement = 88;
    printf("Actual Value : %d\n", decrement);

    decrement--;
    printf("Decrement -- : %d\n", decrement);

    --decrement;
    printf("-- Decrement : %d\n  ", decrement);

    printf("\n-------------------------------\n");
}