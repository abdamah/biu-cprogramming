#include <stdio.h>
int main()
{

    int number;
    printf("Entet nubmer:");
    scanf("%d", &number);
    printf("address:%lu\n", &number);

    switch (number % 2)
    {
    case 0:
        printf("Even number\n");

    case 1:
        printf("Odd number\n");
        break;
    default:
        printf("something\n");
    }

    return 0;
}
