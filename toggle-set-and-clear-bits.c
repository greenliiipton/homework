#include <stdio.h>

int main(void) {
  int n;
  int p;
  if (scanf("%d %d", &n, &p) != 2) {
    return 1;
  }
  if (n < 0 || p < 0) {
    return 1;
  }
  int bit = 1 << p;
  printf("SetBit(%d, %d) >= %d\n", n, p, n | bit);
  printf("ClearBit(%d, %d) >= %d\n", n, p, n & ~bit);
  printf("ToggleBit(%d, %d) >= %d\n", n, p, n ^ bit);
  printf("IsBitSet(%d, %d) >= %s\n", n, p, (n & bit) != 0 ? "true" : "false");
  printf("SetMultipleSet(%d, %d) >= %d\n", n, p, n | p);
  printf("ClearMultipleSet(%d, %d) >= %d\n", n, p, n & ~p);
  printf("ToggleMultpleSet(%d, %d) >= %d\n", n, p, n ^ p);
  return 0;
}
