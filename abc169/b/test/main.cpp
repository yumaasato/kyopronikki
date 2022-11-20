#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;
typedef long long ll;

int main() {
  int n; cin >> n;
  ll m = 1;
  rep(i,0,18) m *= 10;

  ll ans = 1;
  vector<ll> a(n);
  rep(i,0,n) {
    cin >> a[i];
    if(a[i] == 0) {
      cout << 0 << endl;
      exit(0);
    }
  }
  for (auto num : a) {
    if (num <= (m/ans)) ans *= num; // オーバーフローに注意
    else {
      cout << "-1" << endl;
      exit(0);
    }
  }

  cout << ans << endl;
}