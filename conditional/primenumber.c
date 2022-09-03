#include <stdio.h>

int main()
{

    printf("Prime number");
    const int max = 1000;
    int upperlimit;
    printf("enter the upperlimit\n");
    scanf("%d", &upperlimit);
    if (upperlimit < 2 || upperlimit > max)
    {
        printf("input should be greater then 2 and less then 1000\n");
        goto exit_program;
    }
exit_program:
    printf("cleanup\n");
    return 0;
}