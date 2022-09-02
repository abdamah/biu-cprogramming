#include <stdio.h>

int main()
{
    // dynamic
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("odd number\n");
    }

    return 0;
}
