#include <stdio.h>

int main()
{
    // sum of array elements.
    double prices[] = {55.99, 66.9, 100.99, 999.99};

    double sum = 0.0;
    int index = 0;

    while (index < 4)
    {
        sum += prices[index];
        // increment.
        index++;
    }

    printf("sum total: %0.2f$\n", sum);

    return 0;
}
