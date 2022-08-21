#include <stdio.h>

int main()
{

    const char symbol = 'x';
    const int base_width = 10;
    const int tip_width = 5;

    for (int i = 0; i < base_width; i++)
    {
        printf("%c", symbol);
    }

    printf("\n");
    for (int i = 0; i < tip_width; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
    }
    for (int i = tip_width; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
    }

    for (int i = 0; i < base_width; i++)
    {
        printf("%c", symbol);
    }

    printf("\n");

    return 0;
}