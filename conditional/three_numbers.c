#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter number1: ");
    scanf("%d", &number1);

    printf("Enter number2: ");
    scanf("%d", &number2);

    printf("Enter number3: ");
    scanf("%d", &number3);

    // 7, 5, 4;
    if (number1 > number2 && number1 > number3)
    {
        printf("%d is greater.", number1);
    }
    else if (number2 > number3)
    {
        printf("%d is greater.", number2);
    }
    else if (number3 > number1)
    {
        printf("%d is greater.", number3);
    }
    else
    {
        printf("All equal");
    }

    return 0;
}
