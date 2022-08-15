#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    a = 0;
    b = a++;
    printf("After Post Increment\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    a = 0;
    b = ++a;
    printf("After Post Increment\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    return 0;
}