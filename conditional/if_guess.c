#include <stdio.h>

int main()
{
    int secret = 7;
    int number;
    printf("Enter secret number:");
    scanf("%d", &number);
    if (number == secret)
    {
        printf("You win):\n");
        printf("You fail:)\n");
    }
    else
    {
    }
    return 0;
}
