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
  string s,t; cin >> s >> t;
  set<int> st;

  rep(i,s.size()) {
    int k = ((t[i]-s[i]- '0') + 26) % 26; // ASCIIの数値を取得できる
    st.insert(k);
  }
  if(st.size() == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}