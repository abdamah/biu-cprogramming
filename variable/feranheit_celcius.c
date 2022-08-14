#include <stdio.h>

int main()
{
    int feranheit;

    printf("Enter Feranheit: ");
    scanf("%d", &feranheit);

    double celcius = (feranheit - 32) / 1.8;

    printf("Celcius: %f", celcius);

    return 0;
}
