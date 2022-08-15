#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter A operand(int):");
    scanf("%d", &a);
    printf("Enter B operand(int):");
    scanf("%d", &b);

    c = a + b;
    printf("c + b is :%d", c);

    return 0;
}