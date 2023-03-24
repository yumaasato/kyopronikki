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
  vector<vector<char> > s(9,vector<char>(9));
  vector<P> c;

  rep(i,9)rep(j,9) {
    cin >> s[i][j];
    if(s[i][j] == '#') c.emplace_back(i,j);
  }

  int n = c.size();

  int sum = 0;
  rrep(i,0,n-1)rrep(j,i+1,n-1)rrep(k,j+1,n-1) {
    vector<pair<int, int> > a;
    int x = abs(c[i].first-c[j].first); int y = abs(c[i].second-c[j].second);
    a.emplace_back(c[i].first, c[i].second);
    a.emplace_back(c[j].first, c[j].second);
    a.emplace_back(c[k].first, c[k].second);
    a.emplace_back(c[k].first+x, c[k].second+y);
    bool f = false;
    sort(all(a));

    do {

      int w = (a[0].first - a[1].first)*(a[0].first - a[1].first) + (a[0].second - a[1].second)*(a[0].second - a[1].second);
      int x = (a[0].first - a[3].first)*(a[0].first - a[3].first) + (a[0].second - a[3].second)*(a[0].second - a[3].second);
      int y = (a[1].first - a[2].first)*(a[1].first - a[2].first) + (a[1].second - a[2].second)*(a[1].second - a[2].second);
      int z = (a[2].first - a[3].first)*(a[2].first - a[3].first) + (a[2].second - a[3].second)*(a[2].second - a[3].second);
      set<int> st;

      st.insert(w); st.insert(x);
      st.insert(y); st.insert(z);
      if(st.size() == 1) {
        f = true;
        break;
      }
    } while(next_permutation(a.begin(), a.end()));
    if(f) sum++;
  }

  cout << sum << endl;
  return 0;
}