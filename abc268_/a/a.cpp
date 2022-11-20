#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)

int main() {
  set<int> s;
  re(i,5) {
    int a; cin >> a;
    s.insert(a);
  }

  cout << s.size() << endl;
}