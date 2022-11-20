#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  map<int,int> mp;
  rep(i,0,n) {
    cin >> a[i];
    mp[a[i]]++;
  }

  for(auto it= mp.rbegin(); it != mp.rend(); it++) {
    cout << it->second << endl;
  }
  for(int i = 1; i <= n-mp.size(); i++) {
    cout << 0 << endl;
  }
  return 0;
}