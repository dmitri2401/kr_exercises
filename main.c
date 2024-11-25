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


#include <stdio.h>

int main(void)
{
    int res = 10 % 3;
    printf("res = %d\n", res);

    return 0;
}