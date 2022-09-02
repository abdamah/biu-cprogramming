#include <stdio.h>

int main()
{
    int secret_number = 3;
    int number;
    int count = 0;
    while (1)
    {
        count = count + 1;
        printf("Enter secret number:");
        scanf("%d", &number);

        if (number == secret_number)
        {
            printf("You win!!\n");
            break;
        }
        else
        {
            printf("Try again? attempt: %d\n ", count);
            if (count > 2)
            {
                printf("You fail!!\n");
                break;
            }
        }
    }

    return 0;
}
