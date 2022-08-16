//shift only
#include <stdio.h>

int main(void) {
  int n, a[10000];
  int res = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  while (1) {
    for(int i = 0; i < n; i++) {
      a[i] /= 2;
      if(a[i] % 2 != 0) break;
      res++;
    }
  }
  return 0;
}