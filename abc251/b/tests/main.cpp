#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
void chmax(ll& a, ll b) { a = max(a,b);}

int main() {
  int n,w; cin >> n >> w;
  vector<int> a(n+1);
  rep(i,n) cin >> a[i];

  vector<int> flag(w+1);

  rep(i,n) {
    if(a[i] <= w) flag[a[i]] = 1;
  }

  rep(i,n)rrep(j,i+1,n) {
    int sum = a[i] + a[j];
    if(sum <= w) flag[sum] = 1;
  }

  rep(i,n)rrep(j,i+1,n)rrep(k,j+1,n) {
    int sum = a[i] + a[j] + a[k];
    if(sum <= w) flag[sum] = 1;
  }
  
  int ans = 0;
  rep(i,w+1)if(flag[i]) ans++;
  cout << ans << endl;
}