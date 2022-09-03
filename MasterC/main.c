#include <stdio.h>

int main(int argc, char **argv)
{
    char name[20];
    name[0] = 'A';
    name[5] = 'C';

    printf("%c", name[5]);

    return 0;
}