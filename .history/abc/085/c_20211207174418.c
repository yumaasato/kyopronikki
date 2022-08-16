// otoshidama
#include <stdio.h>

int main() {
  int n, y, a, b, c;
  int res10000 = -1, res5000 = -1, res1000 = -1;
  scanf("%d %d", &n, &y);

  for (a = 0; a <= n; a++) {
    for(b = 0; a + b <= n; b++) {
      c = n - (a + b);

    }
  }


  printf("%d %d %d\n", res10000, res5000, res1000);
  return 0;
}