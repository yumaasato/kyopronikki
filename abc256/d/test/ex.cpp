#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  vector<int> s(200010);

  rep(i,n) {
    int l,r; cin >> l >> r;
    s[l]++; s[r]--;
  }


  rrep(i,1,200005) s[i] += s[i-1];

  rrep(i,1,200005) {
    if(s[i-1] == 0 && s[i] != 0) cout << i << " ";
    if(s[i-1] != 0 && s[i] == 0) cout << i << '\n';
  }

  return 0;
}