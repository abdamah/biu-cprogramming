#include <stdio.h>

int main()
{

    int number = 12;

    while (number < 10)
    {
        printf("While\n");
        printf("%d ", number);
        number++;
    }

    printf("\n");
    do
    {
        printf("Do .. while\n");
        printf("%d ", number);
        number++;
    } while (number < 10);

    return 0;
}
