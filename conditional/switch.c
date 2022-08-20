#include <stdio.h>
#include <stdbool.h>
typedef enum
{

    mon = 1,
    tue,
    wed,
    thrus,
    fri,
    sat,
    sun,

} days;

int main()
{
    days inp;
    printf("monday-%d  and  sunnday-%d\n", sun, mon);
    printf("enter values 1-7\n");
    // scanf("%d", &inp);//eroor
    scanf("%u", &inp);
    switch (inp)
    {
    case mon:
        printf("%d Monday\n", inp);
        break;
    case tue:
        printf("%d Tuesday\n", inp);
        break;

    default:
        break;
    }
    return 0;
}