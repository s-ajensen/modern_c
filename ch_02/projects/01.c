#include <stdio.h>

#define HEIGHT 6
#define X_OFFSET 2
#define LEFT_BRANCH_START (HEIGHT - X_OFFSET - 1)

void prn(int line) {

  int right_bound = HEIGHT - 1 + X_OFFSET - line;
  
  int left_bound = -1;
  if (line >= LEFT_BRANCH_START) {
    left_bound = line - LEFT_BRANCH_START;
  }

  for (int col = 0; col < right_bound; col++) {
    printf(col == left_bound ? "*" : " ");
  }
  printf("*\n");
}

int main(void) {
  for (int line = 0; line < HEIGHT; line++) {
    prn(line);
  }
}