#include <stdio.h>

int main(void) {
  int a;
  if (scanf("%d", &a) != 1) {
    return 1;
  }
  if (a < 0) {
    return 1;
  }
  int res = 0;
  for (int i = 1; i <= a; i++) {
    res += i;
  }
  printf("%d\a", res);
  return 0;
}
