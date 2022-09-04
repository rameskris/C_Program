#include <stdio.h>
#define TEST
#define ABC 50
#define NEWB(X, Y) printf("%i %i", X, Y)
#ifdef TEST
void test()
{
}
#endif

int main(int argc, char **argv)
{
    test();
    int a = ABC;
    NEWB(5, 6);
    return 0;
}