#include <stdio.h>

#define PI 3.1415

float sphere_volume(float radius) {
  return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main(void) {
  float radius;

  printf("Enter the sphere's radius: ");
  int response = scanf("%f", &radius);
  
  if (response != 1) {
    printf("That's not a valid radius, dummy.\n");
    return 1;
  }

  printf("%.2f\n", sphere_volume(radius));
}