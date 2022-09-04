#include <stdio.h>
struct stpointer
{
    /* data */
    int a;
    char b;
};
void stp(struct stpointer *ss)
{
    /* data */

    printf("%i %c", ss->a, ss->b);
};

int main()
{

    struct stpointer st;
    st.a = 50;
    st.b = 'z';
    printf("%i %c", st.a, st.b);
    stp(&st);
    return 0;
}