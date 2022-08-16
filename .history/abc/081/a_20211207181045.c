// placing marbles
#include <stdio.h>

int main(void) {
  char s[3];
  int i;
  int ans = 0;
  scanf("%s", s);

  for (i = 0; i < 3; i++) {
    if(s[i] == '1'){
      ans += 1;
    }
  }
  printf("%d", ans);

  return 0;
}