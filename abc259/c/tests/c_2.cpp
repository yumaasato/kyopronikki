#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;
using P = pair<char, int>;

// ランレングス圧縮
vector<P> rle(const string& s) {
  vector<P> res;
  for(char c: s) {
    if(res.size() > 0 && res.back().first == c) {
      res.back().second++;
    }
    else {
      res.emplace_back(c,1);
    }
  }
  return res;
}

bool solve() {
  string s,t; cin >> s >> t;
  auto a = rle(s);
  auto b = rle(t);
  if(a.size() != b.size()) return false;
  rep(i,0,a.size()) {
    if(a[i].first != b[i].first) return false;
    int al = a[i].second;
    int bl = b[i].second;
    if(al == 1) if(bl != 1) return false;
    else if(bl < al) return false; // al != 1のとき
  }
  return true;
}

int main() {
  if(solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}