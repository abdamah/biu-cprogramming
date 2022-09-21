#include <stdio.h>
int main()
{

    int numbers[5] = {1, 2, 3, 4, 5}; // index = 0

    // modification
    // numbers[3] = 40;

    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[3]);
    // printf("%d\n", numbers[4]);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
