#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n,x; cin >> n >> x;
  string s; cin >> s;
  deque<char> dq;
  for (char c : s) {
    if(c == 'U' && !dq.empty() && c == s[n-1]) {
      char f = dq.back();
      if(f == 'R' || f == 'L') dq.pop_back();
      else dq.push_back(c);
    }
    else {
      dq.push_back(c);
    }
  }

  while(!dq.empty()) {
    char t = dq.front(); dq.pop_front();
    if(t == 'U') x /= 2;
    else if (t == 'L') x *= 2;
    else x = x*2+1;
  }
  cout << x << endl;
  return 0;
}