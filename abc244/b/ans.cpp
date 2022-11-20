#include <iostream>
using namespace std;

int main(void)
{
  int n;
  string s;
  cin >> n >> s;

  int x = 0, y = 0, d = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == 'S'){
      if(d == 0) x++;
      if(d == 1) y--;
      if(d == 2) x--;
      if(d == 3) y++;
    }
    if(s[i] == 'R') d = (d+1) % 4;
  }
  cout << x << " " << y << endl;

  return 0;
}
