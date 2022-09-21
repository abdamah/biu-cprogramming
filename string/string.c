#include <stdio.h>

int main()
{
    char name[] = "Abdallah";
    char name2[] = {'A', 'b', 'd', 'a', 'l', 'l', 'a', 'h', '\0'};
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("My name is %s\n", name);
    printf("size=  %lu\n", sizeof(name));
    printf("My name is %s\n", name2);
    printf("size2=  %lu\n", sizeof(name2));

    printf("My name is %c\n", name2[1]);
    printf("array size = %lu\n", sizeof(numbers) / sizeof(int));

    return 0;
}
