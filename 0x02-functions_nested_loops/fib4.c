#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long int i;
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2.0;
    double psi = (1 - sqrt5) / 2.0;

    for (i = 0; i < 99; i++)
    {
        unsigned long int fn = (unsigned long int) ((1.0 / sqrt5) * (pow(phi, i) - pow(psi, i)));
        printf("%lu", fn);

        if (i < 98)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}

