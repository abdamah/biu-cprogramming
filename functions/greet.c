#include <stdio.h>

// definition
void greet()
{
    printf("Hi, Abdallah\n");
}

void getSquare(int number) // parameter // formal paramater
{
    int result = number * number;

    printf("square = %d\n", result);
}

double circle_area(int radius)
{
    double area = 3.14 * radius * radius;

    return area;
}

float rect_area(int width, int height)
{

    return width * height;
}

int main()
{
    // funciton call
    // greet();
    // 2: argument /parameter -> actual parameter
    // getSquare(2);

    // double result = circle_area(10);
    // printf("Circle area: %0.2f\n", result);

    float rect = rect_area(5, 3);

    printf("Circle area: %0.2f\n", rect);

    return 0;
}