#include <stdio.h>

int main()
{
    int prices[3];
    int index = 0;

    while (index < 3)
    {
        printf("Enter price %d ", (index + 1));
        scanf("%d", &prices[index]);

        index++;
    }

    printf("\n");

    index = 0;

    while (index < 3)
    {
        printf("%d ", prices[index]);
        index++;
    }
    return 0;
}