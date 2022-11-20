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
  int n,k; cin >> n >> k;
  vector<int> p(n);
  vector<int> num;

  rep(i,n) {
    rep(j,3) {
      int s; cin >> s;
      p[i] += s;
    }
    num.push_back(p[i]);
  }
  sort(p.rbegin(), p.rend());

  rep(i,n) {
    if(num[i] + 300 >= p[k-1]) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
  return 0;
}