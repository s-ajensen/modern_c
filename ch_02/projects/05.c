#include <stdio.h>
#include <math.h>

float term(float coeff, float x, int exponent) {
  return coeff * pow(x, exponent);
}

int main(void) {
  float x;

  printf("Enter some x for the expression 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 ");

  if (scanf("%f", &x) != 1) {
    printf("That's not a valid x!");
    return 1;
  }

  printf("%.3f\n", term(3, x, 5) + term(2, x, 4) - term(5, x, 3) - term(1, x, 2) + 7 * x - 6);
  return 0;
}