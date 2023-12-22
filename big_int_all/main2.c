//
// Created by anton on 27.10.23.
//

//#include <limits.h>
//#include <math.h>
//#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
#include <time.h>

#include "big_int/big_int.h"
#include "lib/lib.h"
#include "test/test.h"

int while_true_func()
{
    int i = 1; //1692
    while (test_all(i) && i < 1750)
    {
        printf("i = %d\n", i);
        ++i;
    }
}


int main()
{
    while_true_func();
    return 0;
}