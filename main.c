#include <stdio.h>

#include "src/fib.h"

int main(int argc, char *args[]) {
  int n = calc_fib(10);
  printf("n=%d\n", n);
  return 0;
}
