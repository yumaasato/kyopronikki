#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n,k; cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);

  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  vector<bool> dpa(n), dpb(n);
  dpa[0] = true;
  dpb[0] = true;

  rep(i,n-1) {
    if(dpa[i]) {
      if(abs(a[i] - a[i+1]) <= k) dpa[i+1] = true;
      if(abs(a[i] - b[i+1]) <= k) dpb[i+1] = true;
    }
    if(dpb[i]) {
      if(abs(b[i] - a[i+1]) <= k) dpa[i+1] = true;
      if(abs(b[i] - b[i+1]) <= k) dpb[i+1] = true;
    }
  }

  if(dpa[n-1] || dpb[n-1]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}