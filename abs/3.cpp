#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int cnt = 0;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool flag = true;

  while(flag) {
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 != 0) {
        flag = false;
        break;
      }
      a[i] /= 2;
    }
    if(flag) cnt++;
  }

  cout << cnt << endl;
}

