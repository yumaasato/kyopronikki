#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;

int main() {
  int n,q; cin >> n >> q;
  string s; cin >> s;
  ll pos = 0;
  rep(i,0,q) {
    int t,x; cin >> t >> x;
    if(t == 1) {
      pos = (pos - x + n) % n;
    } else {
      cout << s[(pos+x-1)%n] << endl;
    }
  }
}