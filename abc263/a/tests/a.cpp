#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> n(5);
  cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

  sort(n.begin(), n.end());

  if((n[0] == n[1] and n[2] == n[4]) or (n[0] == n[2] and n[3] == n[4])) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}