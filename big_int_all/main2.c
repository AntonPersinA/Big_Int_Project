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

int time_test()
{
    long double cnt = 100;
    for (int len = 20; len < 100; )
    {
        clock_t start, end, start_for, end_for;
        long double time_max = 0, time_min = 1000000000;
        start = clock();
        for (int j = 0; j < cnt; ++j)
        {
            start_for = clock();
            big_int *res = big_int_get_prime(len, 10);
            big_int_free(&res);
            end_for = clock();
            if (time_max < ((long double)end_for - (long double)start_for) / CLOCKS_PER_SEC)
            {
                time_max = ((long double)end_for - (long double)start_for) / CLOCKS_PER_SEC;
            }
            if (time_min > ((long double)end_for - (long double)start_for) / CLOCKS_PER_SEC)
            {
                time_min = ((long double)end_for - (long double)start_for) / CLOCKS_PER_SEC;
            }
        }
        end = clock();
        printf("time(len = %d) = %Lf,    time_max = %Lf,    time_min = %Lf\n", len, ((long double)end - (long double)start) / CLOCKS_PER_SEC / cnt, time_max, time_min);
    }
}


int while_true_func()
{
    int i = 11; //1026
    while (test_all(i) && i < 11) //1750
    {
        printf("i = %d\n", i);
        ++i;
    }
}


int func_search_prime()
{
    clock_t start, end;
    start = clock();
    big_int *n1 = big_int_get_prime(507, 10);
    end = clock();

    printf("time = %Lf\n", ((long double)end - (long double)start) / (long double)CLOCKS_PER_SEC);

    big_int_print(n1);
}


int main()
{
    while_true_func();

    return 0;
}























