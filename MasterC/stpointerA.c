#include <stdio.h>

struct stpointerA
{
    /* data */
    int a;
    char b;
};
void stpafunc(struct stpointerA *my)
{
    printf("%i\n %c\n", my->a, my->b);
}

int main()
{

    struct stpointerA sta;
    sta.a = 12;
    sta.b = 'C';

    stpafunc(&sta);
    return 0;
}