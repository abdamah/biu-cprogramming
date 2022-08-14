#include <stdio.h>

int main()
{
    int feranheit;

    printf("Enter Feranheit: ");
    scanf("%d", &feranheit); // read input from user by scanf function.

    double celcius = (feranheit - 32) / 1.8; // formula (Feranheit - 32) / 1.8;

    printf("Celcius: %f", celcius);

    return 0;
}
