#include<stdio.h>


float fibs(float a, float b) {
  float lv = 0, rv = 1;
  float fib = 0, n = 0;
  while (fib < b) {
    fib = lv + rv;
    printf("%.0f %.0f %.0f\n", fib, a, b);
    if (!(fib < a || fib > b)) n++;
    lv = rv;
    rv = fib;
  }

  return n;
}

main() {
  float fib, a, b;

  while(1) {
    scanf("%f %f", &a, &b);
    if (a == 0 && b == 0)
      break;
    fib = fibs(a, b);
    printf("%.0f\n", fib);
  }
}
