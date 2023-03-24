#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,w; cin >> n >> w;
  vector<int> a(n);
  re(i,n) cin >> a[i];
  ll ans = 0;

  vector<bool> flag(w+1,false);
  re(i,n) {
    if(a[i] <= w) flag[a[i]] = true;
  }

  re(i,n)rep(j,i+1,n) {
    int sum = a[i] + a[j];
    if(sum <= w) flag[sum] = true;
  }

  re(i,n)rep(j,i+1,n)rep(k,j+1,n) {
    int sum = a[i] + a[j] + a[k];
    if(sum <= w) flag[sum] = true;
  }
  rrep(i,0,w) if(flag[i]) ans++;
  cout << ans << endl;
}