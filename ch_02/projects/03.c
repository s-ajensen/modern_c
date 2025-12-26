#include <stdio.h>

#define PI 3.1415f

float sphere_volume(float radius) {
  return (4.0f / 3.0f) * PI * radius * radius * radius;
}

int main(void) {
  float radius;

  printf("Enter the sphere's radius: ");
  
  if (scanf("%f", &radius) != 1) {
    printf("That's not a valid radius, dummy.\n");
    return 1;
  }

  printf("%.2f\n", sphere_volume(radius));
}