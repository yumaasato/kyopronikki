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
  vector<int> a(n);
  vector<vector<int> > b(k);

  rep(i,n) {
    cin >> a[i];
    b[i%k].push_back(a[i]);
  }

  rep(i,k) {
    sort(b[i].rbegin(), b[i].rend());
  }

  sort(all(a));

  vector<int> na;
  rep(i,n) {
    na.push_back(b[i%k].back());
    b[i%k].pop_back();
  }
  if(a==na) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}