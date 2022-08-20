#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("please enter a positive integer\n");
    int ch;
    bool result;
    scanf("%d", &ch);
    if (ch < 0)
    {
        printf("Only positive numbers");
        return EXIT_FAILURE;
    }
    // if (ch % 2 == 0)
    // {
    //     result = 1;
    // }
    // else
    // {
    //     result = 0;
    // }

    // result ? printf("Even\n") : printf("Odd\n");

    result = (ch % 2 == 0) ? true : false;
    if (result)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}