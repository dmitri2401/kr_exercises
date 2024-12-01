/*
#include <stdio.h>

int main(void)
{
    int var_i = -1283;
    double var_d = 54.34675;

    printf("[%#x]\n", var_i);
    printf("[%+.2f]\n", var_d);
    return 0;
}

*/

/*
#include <stdio.h>

int main(void)
{
    char byte1 = '0', byte2 = '0';

    int res = scanf("%c, %c", &byte1, &byte2);
    
    printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    long long var_lli = 0;
    double var_d = 0;

    int res = scanf("%lld %lf", &var_lli, &var_d);
    
    printf("res = %d: var_lli = %lli, var_d = %.2f\n", res, var_lli, var_d);
    return 0;
}
*/

/*

//scanf
#include <stdio.h>

int main(void)
{
    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %lf", &price, &weight);
    
    printf("res = %d: price = %d, weight = %.2f\n", res, price, weight);
    return 0;
}
*/

/*
// Arifmetic operations

#include <stdio.h>

int main(void)
{
    short a = -5;
    int b = 10;

    double res_1 = (double)a / (double)b;
    double res_2 = 7.0 / 2.0;

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int res = 10 % 4;

    // int res_1 = -10 % 4;    // -2
    // int res_2 = -10 % -4;   // -2
    // int res_3 = 10 % -4;    // 2
    int res_4 = 10 - 10 / 4 * 4;

    printf("res = %d, res_4 = %d\n", res, res_4);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    int res = digit % 2;
    printf("res = %d\n", res);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);

    int range = 10;
    int res = digit % range;
    printf("res = %d\n", res);

    return 0;
}
*/


/*
int main(void) {
    int a = scanf("%d", &a);
    int b = scanf("%d", &b);
    int res = a * b;
    
    printf("res = %d\n", res);
    
return 0;
}*/

/*
#include <stdio.h>

int main(void) {
    int a, b;
    int num_read = scanf("%d", &a);
    if (num_read != 1) {
        printf("error reading integer a!");
        return 1; // indicate error
    }

    num_read = scanf("%d", &b);
    if (num_read != 1) {
        printf("error reading integer b!");
        return 1; // indicate error
    }

    int res = a * b;
    
    printf("res = %d\n", res);
    
    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int res = a * b;
    
    printf("res = %d\n", res);
    
    return 0;
}
*/


#include <stdio.h>

int main(void) {

int a = 100;
int* b = &a;
*b = 200;
printf("%d", a); // prints 200
a = 300;
printf("%d\n", *b); // prints 300

}