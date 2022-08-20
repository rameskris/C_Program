#include <stdio.h>

int main()
{
    double radius;
    const double pi = 3.1415926535898;
    scanf("%lf", &radius);
    double result = 4 * pi * radius * radius;
    printf("the given radius %d and Area is %.2f\n", radius, result);

    printf("Enclose volume\n");
    double vol = 4.0 / 3 * pi * radius * radius * radius; // here 4/3 is problem use 4.0
    printf("the given radius %d and Area is %f\n", radius, vol);

    return 0;
}