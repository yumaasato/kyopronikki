#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  stack<string> st;
  st.push("");
  set<char> se;
  for(char c : s) {
    if(c == '(') st.push("");
    else if (c == ')') {
      for (char x : st.top()) {
        se.erase(x);
      }
      st.pop();
    }
    else {
      if(se.count(c)) {
        cout << "No" << endl;
        return 0;
      }
      se.insert(c);
      st.top() += c;
    };
  }
  cout << "Yes" << endl;
  return 0;
}