#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 1000000000000000000LL;

ll power(ll a, ll b) {
  ll p = a, ans = 1;
  rrep(i,1,b) ans = (ans*a);
  return ans;
}

int main() {
  string s; cin >> s;
  cout << '1' + s << endl;
}