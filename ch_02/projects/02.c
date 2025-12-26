#include <stdio.h>

#define RADIUS 10
#define PI 3.1415

float sphere_volume(float radius) {
  return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main(void) {
  printf("%.2f\n", sphere_volume(RADIUS));
}