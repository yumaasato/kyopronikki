// placing marbles
#include <stdio.h>

int main(void) {
  int s[3], i;
  int ans = 0;

  for (i = 0; i < 3; i++) {
    scanf("%d", &s[i]);
    if(s[i] == 1) ans++;
  }
  printf("%d", ans);

  return 0;
}