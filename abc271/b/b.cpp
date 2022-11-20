#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  int n,q; cin >> n >> q;
  vector<vector<int>> a(n);

  rep(i,0,n) {
    int l; cin >> l;
    a[i] = vector<int>(l); // a[i].resize(l);
    rep(j,0,l) cin >> a[i][j];
  }
  rep(i,0,q) {
    int s,t; cin >> s >> t;
    --s; --t;
    cout << a[s][t] << '\n';
  }
}