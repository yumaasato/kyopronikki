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
  ll n,m; cin >> n >> m;
  ll x = power(10,n);

  set<char> s;
  priority_queue<ll> ans;
  string digit = "2";
  string p = "1";

  for(ll i = 1; i <= x;) {
    string num = to_string(i);
    ll wari = i/m;
    if(wari * m != i) continue;

    ans.push(i);
    if(num[0] == '9') {
      digit = '1' + digit;
      p = '1' + p;
      i += stoll(digit);
    } else {
      i += stoll(digit);
    }
  }
  ll a = ans.top();
  if(ans.size() == 0) cout << -1 << endl;
  else cout << a << endl;
}