#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef long long ll;
void chmax(int & x, int y) { x = max(x,y);}
void chmin(int & x, int y) { x = min(x,y);}
// const ll INF = 1000000000000000000LL;
// const int inf = 1e9+7;
// using mint = modint998244353;
// const int dx[4] = { 1,0,-1,0 };
// const int dy[4] = { 0,1,0,-1 };
using P = pair<int, int>;
using pl = pair<ll, ll>;
using Graph = vector<vector<int>>;
using pq = priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>;

int main() {
  ll L,A,B; cin >> L >> A >> B;
  vector<pl> x;
  rep(i,A) {
    ll v,l; cin >> v >> l;
    x.emplace_back(v,l);
  }

  vector<pl> y;
  rep(i,B) {
    ll v,l; cin >> v >> l;
    y.emplace_back(v,l);
  }

  ll ans = 0;
  ll i = 0, j = 0;
  while(i < A && j < B) {
    auto &[a,la] = x[i];
    auto &[b,lb] = y[j];
    cout << a << " " << la << " " << b << " " << lb;
    cout << endl;

    ll num = min(la,lb);
    if(a == b) ans += num;

    la -= num; lb -= num;
    if(la == 0) ++i;
    if(lb == 0) ++j;
  }
  cout << ans << endl;
  return 0;
}