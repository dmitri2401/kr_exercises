/*
#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 *
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;       /* lower limit of temperature table *
    upper = 300;     /* upper limit *
    step = 20;       /* step size *

    fahr = lower;
    while (fahr <= upper)  {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
} */ 


/*
#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version *
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;       /* lower limit of temperature table *
    upper = 300;     /* upper limit *
    step = 20;       /* step size *

    printf("Fahrenheit-Celsius conversion\n");
    fahr = lower;
        while (fahr <= upper)  {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
*/

/*
#include <stdio.h>

/* print Celsius-Fahrenheit table
for celsius = 0, 20, ..., 300; floating-point version *
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;       /* lower limit of temperature table *
    upper = 300;     /* upper limit *
    step = 20;       /* step size *

    printf("Celsius-Fahrenheit conversion\n");
    celsius = lower;
        while (celsius <= upper)  {
        fahr = celsius*5.0/9.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
*/


/*
#include <stdio.h>

/* print Fahrenheit-Celsius table *
main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/


/*
#include <stdio.h>

/* print Fahrenheit-Celsius table reverse *
main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/

/*
#include <stdio.h>

#define LOWER 0     /* lower limit of table *
#define UPPER 300   /* upper limit *
#define STEP 20     /* step size *

/* print Fahrenheit-Celsius table *
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", (5.0/9.0)*(fahr-32), fahr);
}
*/


/*
#include <stdio.h>

/* copy input to output; 1st version *
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
*/


/*
#include <stdio.h>

// copy input to output, 2nd version 
main()
{
    int c;

    while ((c = getchar()) != EOF)
    putchar(c);
}
*/


/*
#include <stdio.h>

// exercise 1-6

main()
{
    int c;

    while ((c = getchar()) != EOF)
    putchar(c) = 0;
}
*/

/*
#include <stdio.h>

// exercise 1-7

main()
{
    printf("%d\n, EOF");
}
*/


/*

// not mine!
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%d", EOF);
    return 0;
}
*/


/*
#include <stdio.h>

// count characters in input; 1st version
main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
    ++nc;
    printf("%ld\n", nc);
}
*/


/*
#include <stdio.h>

// count characters in input; 2nd version
main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    ;
    printf("%.0f\n", nc);
}
*/

/*
#include <stdio.h>

// count lines in input
main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
*/

