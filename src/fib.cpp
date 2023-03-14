#include "fib.h"

int calc_fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return calc_fib(n-2) + calc_fib(n-1);
}
