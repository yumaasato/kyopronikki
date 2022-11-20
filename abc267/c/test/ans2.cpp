#include <bits/stdc++.h>
using namespace std;
typedef ll ll;

int main(){
  int n,m;
  cin>>n>>m;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  vector<ll> sum(n+1);
  for(int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i-1];
  vector<ll> sumi(n-m+1);
  ll now=0;
  for(int i=0;i<m;i++) now+=a[i]*(i+1);
  sumi[0]=now;
  for(int i=1;i<n-m+1;i++) sumi[i]=sumi[i-1]+m*a[m+i-1]-(sum[m+i-1]-sum[i-1]);
  ll ans = -1000000000000000000ll;
  for(int i=0;i<n-m+1;i++) ans=max(ans,sumi[i]);
  cout<<ans<<endl;
}
