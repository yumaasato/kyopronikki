//shift only
#include <stdio.h>

int main(void) {
  int n, a[10000], i;
  int res = 0, flag == 0;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  while (flag == 0) {
    for(i = 0; i < n; i++) {
      if(a[i] % 2 != 0) {
        flag = 1;
        break;
      }
      a[i] /= 2;
    }
    if(res++;
  }

  printf("%d", res);
  return 0;
}