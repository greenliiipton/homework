#include <stdio.h>

int main(void) {
  int h;
  int m;
  int s;
  if (scanf("%d %d %d", &h, &m, &s) != 3) {
    return 1;
  }
  if (h < 0 || m < 0 || s < 0) {
    return 1;
  }
  int res = ((h * 60 + m) * 60 + s) * 1000;
  printf("%d\n", res);
  return 0;
}
