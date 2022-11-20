#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const int mod = 998244353;

int main() {
  ll n; cin >> n;
  n %= mod;
  if(n < 0) n += mod;
  cout << n << endl;
  return 0;
}