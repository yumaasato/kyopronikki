// ランレングス圧縮
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  ll n; cin >> n;
  string s; cin >> s;
  vector<pair<char,ll>> f;

  for(ll i = 0; i < s.size();) {
    ll j = i;
    while(s[i] == s[j]) j++;
    f.push_back({s[i],j-i});
    i = j;
  }

  ll ans = n*(n-1)/2;
  for(auto pa : f) {
    ans -= pa.second*(pa.second-1)/2;
  }
  cout << ans << endl;
}