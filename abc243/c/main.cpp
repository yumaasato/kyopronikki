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
  vector<int> x(n),y(n);
  rep(i,n) {
    cin >> x[i] >> y[i];
  }
  string s; cin >> s;

  map<int,vector<int> > mp;
  rep(i,n) {
    mp[y[i]].push_back(i);
  }
  for(auto &z : mp) {
    vector<int> index = z.second;
    vector<pair<int,char> > ic;
    for (int &i : index) {
      ic.emplace_back(x[i],s[i]);
    }
    sort(all(ic));
    int l = ic.size();
    rep(i,l-1) {
      if(ic[i].second == 'R' && ic[i+1].second == 'L') {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}