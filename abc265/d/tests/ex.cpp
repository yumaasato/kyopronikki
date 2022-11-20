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
  ll n,p,q,r; cin >> n >> p >> q >> r;
  vector<ll> a(n);
  set<ll> s;
  s.insert(0);
  ll sum = 0;

  rep(i,n) {
    cin >> a[i];
    sum += a[i];
    s.insert(sum);
  }

  for(auto &x: s) {
    if(s.count(x+p) == 1 && s.count(x+p+q) == 1 && s.count(x+p+q+r) == 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}