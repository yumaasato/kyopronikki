#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

int calc_divisors(int N) {
  set<int> res;
  for (int i = 1; i * i <= N; ++i) {
    if (N % i != 0) continue;
    res.insert(i);
    if (N / i != i) res.insert(N / i);
  }
  return res.size();
}

int calc_digit(ll n) {
  int res = 0;
  while(n) {
    ++res;
    n /= 10;
  }
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

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

bool used[2010][2010];

int main() {
  int h,w,Q; cin >> h >> w >> Q;

  dsu uf(h*w);
  rep(i,Q) {
    int q; cin >> q;
    if(q == 1) {
      int r,c; cin >> r >> c;
      rep(j,4) {
        int nx = r+dx[j], ny = c + dy[j];
        if(used[nx][ny] == false) continue;
        int n1 = (r-1)*w + (c-1);
        int n2 = (nx-1)*w + (ny-1);
        uf.merge(n1,n2);
      }
      used[r][c] = true;
    }
    else {
      int ra,ca,rb,cb;
      cin >> ra >> ca >> rb >> cb;
      bool flag = true;
      if(used[ra][ca] == false || used[rb][cb] == false){
        flag = false;
      }
      int n1 = (ra-1)*w+(ca-1);
      int n2 = (rb-1)*w+(cb-1);
      if(uf.same(n1,n2) == false) {
        flag = false;
      }
      if(flag) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}