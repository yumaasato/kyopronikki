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
const ll mod = 998244353;

int main() {
  ll a[6];
  rep(i,6) {
    cin >> a[i];
    a[i] = (a[i]+mod)%mod;
  }

  ll num = (((a[0]*a[1]+mod)%mod)*a[2]+mod)%mod - (((a[3]*a[4]+mod)%mod)*a[5]+mod)%mod;
  cout << (num+mod)%mod << endl;
  return 0;
}