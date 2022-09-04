#include <stdio.h>

int main()
{
    int number;
    int even_sum = 0;
    int odd_sum = 0;
    int i;

    printf("Enter number:");
    scanf("%d", &number);

    /*for (i = 0; i < number; i++)
    {
        if (i % 2 == 0)
            // even_sum = even_sum + i;
            even_sum += i;
        else
            odd_sum += i;
    }*/

    /*while (i < number)
    {

        if (i % 2 == 0)

            even_sum += i;

        else
            odd_sum += i;

        i++;
    }*/

    do
    {
        if (i % 2 == 0)
            even_sum += i;

        else
            odd_sum += i;

        i++;
    } while (i < number);

    printf("\n");
    printf("Even sum = %d\n", even_sum);
    printf("Odd sum = %d\n", odd_sum);

    return 0;
}
