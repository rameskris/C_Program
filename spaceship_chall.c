#include <stdio.h>
#include <stdlib.h>
/*
enum thrust
{
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20

};
*/
typedef enum
{
    Thrust_NONE = 0,
    Thrust_LOW = 5,
    Thrust_MEDIUM = 9,
    Thrust_HIGH = 12,
    Thrust_MAXIMUM = 20

} Thrust;

int main()
{
    Thrust th;
    th = Thrust_NONE;
    Thrust thLow = Thrust_LOW;
    Thrust thMed = Thrust_MEDIUM;
    Thrust thMax = Thrust_MAXIMUM;
    Thrust thHigh = Thrust_HIGH;
    printf("\n spaceship thrust \n");
    printf("Thrust level %d\n", th);
    printf("Thrust level %d\n", thLow);
    printf("Thrust level %d\n", thMed);
    printf("Thrust level %d\n", thHigh);
    printf("Thrust level %d\n", thMax);

    return 0;
}