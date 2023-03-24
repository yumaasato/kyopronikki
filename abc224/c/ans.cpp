#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<P> s(n);
  rep(i,n) {
    cin >> s[i].first >> s[i].second;
  }

  ll sum = 0;
  rep(i,n)rrep(j,i+1,n)rrep(k,j+1,n) {
    int dx1 = s[k].first - s[i].first;
    int dy1 = s[k].second - s[i].second;
    int dx2 = s[j].first - s[i].first;
    int dy2 = s[j].second - s[i].second;
    if(dx1 * dy2 != dx2 * dy1) sum++;
  }
  cout << sum << endl;
  return 0;
}