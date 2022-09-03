#include <stdio.h>

void printName()
{
    printf("Ramesh\n");
}
int addition(int a, int b)
{
    return a + b;
}
int main()
{

    void (*ptr)() = &printName;
    ptr();

    int (*ptr1)(int, int) = &addition;
    int result = ptr1(5, 6);
    printf("%d", result);
    return 0;
}