#include <stdio.h>

int main()
{
    // Read name and age from user, check eligibility  age > 18 e, not eli

    char name[50];
    int age;

    printf("Enter a name: ");
    scanf("%s", name);

    printf("Enter a age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("%s and %d  is eligible", name, age);
    }
    else
    {
        printf("%s and %d  is not eligible", name, age);
    }

    return 0;
}
