#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;

int main() {
  ll n; cin >> n;
  vector<ll> ans;

  for(ll bit = n; bit >= 0; bit = (--bit) & n) {
    ans.push_back(bit);
    if(bit == 0) break;
  }

  reverse(all(ans));
  for(auto &x : ans) {
    cout << x << endl;
  }
  return 0;
}