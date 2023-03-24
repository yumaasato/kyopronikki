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
  string s; cin >> s;
  vector<int> num(19);
  int n = s.size();

  rep(i,n) {
    num[s[i] - '0']++;
  }
  if(n == 1) {
    if(num[8] == 1) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  if(n==2) {
    rep(iq,2) {
      int tmp = stoi(s);
      if(tmp % 8 == 0) {
        cout << "Yes" << endl;
        return 0;
      }
      reverse(all(s));
    }
    cout << "No" << endl;
    return 0;
  }

  for(int x=112; x<=992; x+=8) {
    int tmp = x;
    bool ok = true;
    rep(iq,3) {
      int t = tmp % 10;
      if(t == 0 || num[t] == 0) {
        ok = false;
        break;
      }
      tmp /= 10;
    }

    if(ok) {
      cout << "Yes" << endl;
      cout << x << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}