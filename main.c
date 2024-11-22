#include <stdio.h>

int main(void)
{
    int var_i = -1283;
    double var_d = 54.34675;

    printf("[%#x]\n", var_i);
    printf("[%+.2f]\n", var_d);
    return 0;
}