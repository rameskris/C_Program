#include <stdio.h>

int main(int argc, char **argv)
{
    char name[20];
    fgets(name, sizeof(name), stdin);
    printf("%s", name);

    return 0;
}