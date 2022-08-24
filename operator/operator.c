#include <stdio.h>
/**
 * operator +, -, *, / , %
 * @return int
 *
 * github: https://github.com/abdamah/biu-cprogramming
 * execise:
 * */
int main()
{
    // adds two number
    int number1 = 10;
    int number2 = 12;

    // adds two number
    int add = number1 + number2;
    // subts two number
    int sub = number1 - number2;

    // modulus : remainder   5/2 = 1
    int mod = number2 % number1;

    // precedence: * /, + -
    // precedence: (), * /, + -

    int precedence = 7 - 6 / (2 + 1);

    printf("add: %d\n", add);
    printf("sub: %d\n", sub);
    printf("mod: %d\n", mod);
    printf("precedence: %d\n", precedence);

    return 0;
}
