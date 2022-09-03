#include <stdio.h>

int main()
{

    // definig pointers
    int apples = 12;
    int *num = NULL;
    num = &apples;

    printf("%d", apples);

    // dereference or indirection get value using pointers

    printf("%d\n", *num);
    printf("%d\n", num);
    printf("%p\n", &apples);

    *num += 1;
    printf("after pointer\n");
    printf("%d\n", *num);
    printf("%d\n", num);
    printf("%d\n", apples);

    return 0;
}