#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a; double b; cin >> a >> b;
  ll nb = 100*b + 0.1;
  a *= nb;
  cout << a/100 << endl;
  return 0;
}