#include <stdio.h>

int main(void) {
  int a;
  int b;
  if (scanf("%d %d", &a, &b) != 2) {
    return 1;
  }
  if (a < 0 || b < 0) {
    return 1;
  }
  if ((a & b) == 0) {
    printf("1\n");
  }

  else {
    printf("0\n");
  }
  return 0;
}