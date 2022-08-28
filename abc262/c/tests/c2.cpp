#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  int eq = 0;
  rrep(i,1,n) {
    cin >> a[i];
    if(a[i] == i) eq += 1;
  }

  ll ans = (ll)eq * (eq-1) / 2; // loop文中に入れない
  
  rep(i,1,n){ // 二重ループはTLE
    if(a[a[i]] == i and a[i] > i) ans += 1; // a[a[i]] == a[j]
  }
  cout << ans << endl;
}