#include <stdio.h>

int main()
{
    unsigned data = 0xABCD;
    unsigned N = 4;
    unsigned M = 7;

    unsigned result = data >> N;
    printf("data 0x%04X\n", data);
    printf("data 0x%04X\n", result);

    return 0;
}