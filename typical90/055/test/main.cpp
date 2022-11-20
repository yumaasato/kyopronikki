#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  ll n,p,q; cin >> n >> p >> q;
  vector<ll> a(n);
  re(i,n) cin >> a[i];

  int ans = 0;
  rep(i,0,n)rep(j,i+1,n)rep(k,j+1,n)rep(l,k+1,n)rep(m,l+1,n) {
      if(a[i]%p*a[j]%p*a[k]%p*a[l]%p*a[m]%p == q) ans++;
  }
  cout << ans << endl;
}