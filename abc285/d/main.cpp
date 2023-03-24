#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  int n; cin >> n;
  vector<string> s(n),t(n);
  set<string> st;
  map<string,int> mp;
  vector<int> d(2*n+1);
  dsu uf(2*n);

  int num = 0;
  rep(i,n) {
    cin >> s[i] >> t[i];

    if(!st.count(s[i])) {
      st.insert(s[i]);
      mp[s[i]] = num;
      num++;
    }

    if(!st.count(t[i])) {
      st.insert(t[i]);
      mp[t[i]] = num;
      num++;
    }

    if(uf.same(mp[s[i]],mp[t[i]])) {
      cout << "No" << endl;
      return 0;
    }
    uf.merge(mp[s[i]],mp[t[i]]);
    d[mp[s[i]]]++;
    d[mp[t[i]]]++;
  }

  int k = st.size();
  rep(i,n) {
    if(d[mp[s[i]]] > 2 || d[mp[t[i]]] > 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}