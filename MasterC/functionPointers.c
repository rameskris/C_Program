#include <stdio.h>

void hello(int, int);
int main()
{
    int a = 9;
    int b = 10;
    // return type(variable name)(argument,argument)=memoryadress;
    void (*ptr)(int, int) = &hello;
    ptr(a, b);
    return 0;
}

void hello(int a, int b)
{
    printf("hello %d", a + b);
}