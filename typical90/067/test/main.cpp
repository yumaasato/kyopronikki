#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
const long long INF = 1LL<<60;
typedef long long ll;

int main() {
  string n;
  int k;
  cin >> n >> k;

  ll sum = 0;
  rep(i,0,n.size()) {
    if(i == 0) sum += ll(n[i]-'0');
    else {
    ll nu = pow(8, i);
    sum += ll(nu*n[i]-'0');
    }
  }

  string st = to_string(sum);
  rep(i,0,st.size()) {
    if(st[i] == '8') st[i] = '5';
  }
  ll ans = stoll(st);
  cout << ans << endl;
}