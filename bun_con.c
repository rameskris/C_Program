#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n===========Bunch of constants========\n");

    const int moonLanding = 1969;
    const double speedofLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned heaxaSecret = 51966U;

    printf("Padded with spaces and padded with zeros");

    printf("Moon landing:\n %10d\n %010d\n", moonLanding, moonLanding);

    printf("spped of light \n %.2f\n %.3e\n", speedofLight, speedofLight);

    printf("Hexa Dead(here Captial x)\n 0x%X\n %6u\n\n", hexaDead, hexaDead);

    printf("Heaxa Secret %x\n", heaxaSecret);

    return EXIT_SUCCESS;
}