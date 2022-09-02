#include <stdio.h>

int main()
{
    int day;
    printf("Enter day number:");
    scanf("%d", &day);

    switch (day) // 4
    {
    case 1:
        printf("Sunday\n");

    case 2:
        printf("Monday\n");

    case 3:
        printf("Tue\n");

    case 4:
        printf("We\n");
        break;
    case 5:
        printf("Thu\n");
        break;
    case 6:
        printf("Fri\n");
        break;
    default:
        printf("Saturday\n");
    }

    return 0;
}
