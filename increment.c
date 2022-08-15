#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    a = 0;
    b = a++ * 2 + 1; // first 'a' value zero is assigned to b then 'a' increment and asiigned to a
                     // after *2 +1 happens to b hero zer0*2+1

    printf("After Post Increment\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    a = 0;
    b = ++a * 2 + 1;

    printf("After Post Increment\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    return 0;
}