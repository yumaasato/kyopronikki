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
  int h,w; cin >> h >> w;
  vector a(19,vector<int>(19));
  rep(i,h)rep(j,w) cin >> a[i][j];

  int num = h+w-2;
  int ans = 0;

  rep(bit,(1<<num)) {
    int x = 0,y=0;
    set<int> st;
    bool f = true;
    st.insert(a[0][0]);
    rep(i,num) {
      if((bit>>i)&1) {
        y++;
      } else {
        x++;
      }
      if(st.count(a[x][y])) {
        f = false;
        break;
      }
      st.insert(a[x][y]);
      if(x == h || y == w) {
        f = false;
        break;
      }
    }
    if(x == h-1 && y==w-1 && f == true) ans++;
  }
  cout << ans << endl;
  return 0;
}