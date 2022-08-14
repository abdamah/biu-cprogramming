#include <stdio.h>

int main()
{
    int number = 10; // vairalbe initialisation
    double salary = 100.99;
    float price;   // variable declaration
    price = 99.9F; // Value assigment and denoted by F to indicate it's float valaue.
    char letter = 'a';

    const float PI = 3.14; // constant keyword const
    // PI = 3.15; // we cann't modify the value.

    // operator: +, -, * / %

    printf("Variables: \n");
    // specifiers
    printf("number: %d\n", number);
    printf("price: %Lf\n", salary);
    printf("price: %f\n", price);
    printf("letter: %c\n", letter);
    printf("PI: %f\n", PI);

    return 0;
}
