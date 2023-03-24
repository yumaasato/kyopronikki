#include <bits/stdc++.h>
using namespace std;
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
using Graph = vector<vector<int>>;
using pq = priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>;

// void dfs(int pos) {
//    visited[pos] = true;
//    rep(i,g[pos].size()) {
//         int nex = g[pos][i];
//         if(visited[nex] == false) dfs(nex);
//    return;
// }

vector<P> prime_factorize(ll n) {
  vector<P> res;
  for (ll p = 2; p * p <= n; ++p) {
  if (n % p != 0) continue;
    int num = 0;
    while (n % p == 0) { ++num; n /= p; }
    res.push_back(make_pair(p, num));
  }
  if (n != 1) res.push_back(make_pair(n, 1));
  return res;
}

int isPrime(int x) {
  int i;
    if(x<2) return 0;
    else if(x==2) return 1;
    if(x%2==0) return 0;
  for(i = 3; i*i <= x; i+= 2) {
    if(x%i == 0) return 0;
  }
  return 1;
}

int calc_digit(ll n) {
  int res = 0;
  while(n) {
    ++res;
    n /= 10;
  }
  return res;
}

int main() {
  int n,q; cin >> n >> q;
  vector<int> f(n+1,-1),b(n+1,-1);

  rep(qu,q) {
    int m; cin >> m;
    if(m == 1) {
      int x,y; cin >> x >> y;
      x--; y--;
      f[y] = x; b[x] = y;
    }
    if(m == 2) {
      int x,y; cin >> x >> y;
      x--; y--;
      f[y] = -1, b[x] = -1;
    }
    if(m == 3) {
      int x; cin >> x;
      x--;
      int ia = x, ib = x;
      vector<int> a,b;
      while(true) {
        if(f[ia] != -1) {
          a.push_back(f[ia]);
          ia = f[ia];
        }
        if(b[ib] != -1) {
          b.push_back(b[ib]);
          ib = b[ib];
        }
        if(f[ia] == -1 && b[ib] == -1) break;
      }
      int ans = a.size() + b.size() + 1;
      cout << ans << " ";
      drep(j,(int)a.size()-1,0) {
        cout << a[j] << " ";
      }
      cout << x << " ";
      rep(j,(int)b.size()) {
        cout << b[j] << " ";
      }
    }
  }
  return 0;
}