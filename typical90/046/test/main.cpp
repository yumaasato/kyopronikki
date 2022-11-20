#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n; cin >> n;
  vector<int> x(n),y(n),z(n);

  rep(i,0,n) cin >> x[i];
  rep(i,0,n) cin >> y[i];
  rep(i,0,n) cin >> z[i];

  vector<int> a(46),b(46),c(46);

  rep(i,0,n) {
    x[i] %= 46; y[i] %= 46; z[i] %= 46;
    a[x[i]]++; b[y[i]]++; c[z[i]]++;
  }

  ll sum = 0;
  rep(i,0,46)rep(j,0,46)rep(k,0,46) {
    if((i+j+k) % 46 == 0) sum += (ll)a[i]*b[j]*c[k];
  }
  cout << sum << endl;
}