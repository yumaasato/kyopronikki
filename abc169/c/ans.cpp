#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a; string b; cin >> a >> b;
  ll nb = (b[0] - '0')*100 + (b[2] - '0')*10 + (b[3] - '0');
  cout << a*nb / 100 << endl;
  return 0;
}