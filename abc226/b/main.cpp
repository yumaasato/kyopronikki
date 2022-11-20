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

int main() {
  int n; cin >> n;
  set<vector<int> > s;
  rep(i,n) {
    int l; cin >> l;
    vector<int> a(l);
    rep(j,l) cin >> a[j];
    s.insert(a);
  }
  cout << s.size() << endl;
  return 0;
}