#include <stdio.h>

int main()
{
    // sum of even - odd of a given array.
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 20, 25
    int index = 0;
    int even_sum = 0;
    int odd_sum = 0;

    while (index < 9)
    {
        if (numbers[index] % 2 == 0)
            even_sum += numbers[index];
        else
            odd_sum += numbers[index];

        index++;
    }

    printf("even_sum = %d\n", even_sum);
    printf("odd_sum = %d\n", odd_sum);

    return 0;
}
