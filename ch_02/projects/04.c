#include <stdio.h>

#define TAX_PERCENT 20.0f

int main(void) {
  float response;
  printf("How much did you spend on dinner? ");

  if (scanf("%f", &response) != 1) {
    printf("That just doesn't make any sense.");
    return 1;
  }

  float bill = response + response * TAX_PERCENT * 0.01;
  printf("%.2f\n", bill);
  return 0;
}