#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> ball(n);
  vector<int> pos(n);
  rep(i,n) ball[i] = i;
  rep(i,n) pos[ball[i]] = i;

  rep(qi,q) {
    int x; cin >> x;
    x--;
    int i = pos[x];
    int j = i+1;
    if (j == n) j = i-1; 
    int y = ball[j];
    swap(ball[i], ball[j]);
    swap(pos[x], pos[y]);
  }
  rep(i,n) cout << ball[i]+1 << ' ';
  cout << endl;
  return 0;
}