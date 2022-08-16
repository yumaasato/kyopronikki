#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long int n, a, b;
  int count = 0;

  scanf("%ld", &n);

  for(a = 1; a < 38; a++) {
    for (b = 1; b < 26; b++) {
      if(n == (powl(3,a) + powl(5,b))) {
        printf("%d %d\n", (int)a, (int)b);
        count++;
        exit(0);
      }
    }
  }

  if (count == 0) {
    printf("-1\n");
  }
  return 0;
}