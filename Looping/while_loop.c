#include <stdio.h>

int main()
{
    int number = 1;     // start
    while (number < 10) // 10: end point
    {
        printf("%d ", number); // body
        // number += 1; // compound notation
        // number = number + 1; // normal notation
        number++; // increment notation
    }
    return 0;
}