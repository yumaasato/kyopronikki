#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  ll n; cin >> n;
  vector<ll> ans;
  for(ll s = n;; s = (s-1)&n) {
    ans.push_back(s);
    if (s==0) break;
  }
  reverse(ans.begin(), ans.end());
  for(ll s : ans) cout << s << endl;
}