#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
void chmax(ll & x, ll y) { x = max(x,y);}
void chmin(ll & x, ll y) { x = min(x,y);}
// const ll INF = 1000000000000000000LL;
// const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

vector<int> enum_divisors(int N) {
    vector<int> res;
    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
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
  int n; cin >> n;
  vector<int> a(n+1);
  set<int> st;
  rrep(i,1,n) cin >> a[i];

  int m = 0;
  vector<int> b(n+1);
  rrep(i,1,n) {
    const auto &res = enum_divisors(i);
    for(auto ex : res) {
      b[ex] += a[i];
    }
  }
  rrep(i,1,n) {
    if(b[i] != 0) m++;
  }
  cout << m << endl;

  rrep(i,1,n) {
    if(b[i] != 0) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}