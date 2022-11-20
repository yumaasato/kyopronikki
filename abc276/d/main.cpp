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


set<int> s;
int sum(int i, int k) {
  int cnt = 0;
  i = i / k;
  while(i %2 == 0 || i%3 == 0) {
    if(i % 2 == 0) {
      i /=2;
      cnt++;
    }
    if(i % 3 == 0) {
      i /= 3;
      cnt++;
    }
  }
  s.insert(i*k);
  return cnt;
}


int main() {
  int n; cin >> n;
  vector<int> a(n);
  int g;

  rep(i,n) {
    cin >> a[i];
    if(i == 0) g = a[0];
    else g = gcd(g,a[i]);
  }

  int ans = 0;
  rep(i,n) {
    ans += sum(a[i],g);
  }

  if(s.size() == 1) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}