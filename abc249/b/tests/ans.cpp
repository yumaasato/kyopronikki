#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool upper = false, lower = false;
  set<char> st;
  for (char c : s) {
    if (isupper(c)) upper = true;
    if (islower(c)) lower = true;
    st.insert(c);
  }
  if (upper && lower && st.size() == s.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}