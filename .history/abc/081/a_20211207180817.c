// placing marbles
#include <stdio.h>

int main(void) {
  int s[3], i;
  int ans = 0;
  scanf("%s", s);

  for (i = 0; i < 3; i++) {
    if(s[i] == 1) ans++;
  }
  printf("%d", ans);

  return 0;
}