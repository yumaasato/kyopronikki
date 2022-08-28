#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  ll n; cin >> n;

  rep(x,0,998244353) {
    if((n-x) % 998244353 == 0) {
      cout << x << endl;
      return 0;
    }
  }
}