#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;

int main() {
  ll n; cin >> n;
  vector<int> a(n);
  rrep(i,1,n) cin >> a[i];

  vector<ll> cnt(2*n+1);

  rrep(i,1,n) cnt[i] = cnt[i-1] + a[i];
  rrep(i,1,n) cnt[i+n] = cnt[i+n-1] + a[i];

  if(cnt[n] % 10LL != 0LL) {
    cout << "No" << endl;
    return 0;
  }

  rrep(i,0,n) {
    ll tar = cnt[i] + cnt[n]/10LL;
    int pos = lower_bound(cnt.begin(), cnt.end(), tar) - cnt.begin();
    if(cnt[pos] == tar) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}