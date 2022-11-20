#include <bits/stdc++.h>
using namespace std;
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;

int main() {
  ll n; cin >> n;
  string s; cin >> s;
  vector<int> a(1000009), b(1000009);

  rrep(i,1,n) {
    if(s[i-1] == 'o') {
      a[i] = i; b[i] = b[i-1];
    }
    if(s[i-1] == 'x') {
      a[i] = a[i-1]; b[i] = i;
    }
  }

  ll ans = 0;
  rrep(i,1,n) {
    ans += 1LL * min(a[i],b[i]);
  }
  cout << ans << endl;
}