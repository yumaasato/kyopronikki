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
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  rrep(i,1,n) cin >> a[i];

  vector<int> s(2*n+2);
  s[1] = 0;

  rrep(i,1,n) {
    s[i*2] = s[a[i]] + 1;
    s[i*2 + 1] = s[a[i]] + 1;
  }

  rrep(i,1,2*n+1) {
    cout << s[i] << '\n';
  }
  cout << endl;

  return 0;
}