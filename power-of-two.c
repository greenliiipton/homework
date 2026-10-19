#include <stdio.h>

int main(void) {
  int a;
  if (scanf("%d", &a) != 1) {
    return 1;
  }
  if (a < 0) {
    return 1;
  }
  int power_of_two = (a > 0) && (a & (a - 1)) == 0;
  printf("power_of_two(%d)? %s\a", a, power_of_two ? "true" : "false");
  return 0;
}
