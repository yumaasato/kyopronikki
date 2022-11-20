#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int n; cin >> n;
  set<string> st;
  rep(i,n) {
    string s; cin >> s;
    string a = "HDCS";
    string b = "A23456789TJQK";
    bool fa = false;
    bool fb = false;
    rep(j,a.size()) {
      if(s[0] == a[j]) fa = true;
    }
    rep(j,b.size()) {
      if(s[1] == b[j]) fb = true;
    }
    if(!fa || !fb) {
      cout << "No" << endl;
      return 0;
    }
    st.insert(s);
  }
  if(st.size() == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}