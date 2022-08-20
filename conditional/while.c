#include <stdio.h>
#include <stdbool.h>

int main()
{
    int userinp, result;

    do
    {
        printf("enter -1 to exit\n");
        scanf("%d", &userinp);

        if (userinp > 0)
        {
            result = 1;
            while (result < userinp)
            {
                result *= 2;
            }
            printf("nerest two power %d\n", result);
        }

    } while (userinp != -1);

    return 0;
}