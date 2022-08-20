#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("enter number of a\n");
    scanf("%d", &a);
    printf("enter number of b\n");
    scanf("%d", &b);
    printf("a==b %d\n", a == b);

    printf("a!=b %d\n", a != b);
    printf("a<b %d\n", a < b);
    printf("a>b %d\n", a > b);
    printf("a>=b %d\n", a >= b);
    printf("a<=b %d\n", a <= b);

    return EXIT_SUCCESS;
}