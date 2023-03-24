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
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;
using pq = priority_queue<int>;
using pqg = priority_queue<int,vector<int>, greater<int>>;

// 約数列挙
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

int main() {
  int n,q; cin >> n >> q;
  set<int> re; // 呼ばれてない
  set<int> st; // 呼ばれたのに受付に行ってない
  
  rrep(i,1,n) {
    re.insert(i);
  }

  rep(iq,q) {
    int t; cin >> t;
    if(t == 2) {
      int x; cin >> x;
      st.erase(x);
    } else {
      if(t == 1) {
        st.insert(*re.begin());
        re.erase(*re.begin());
      }
      if(t == 3) {
        cout << *st.begin() << endl;
      }
    }
  }
  return 0;
}