#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int k; cin >> k;
  int h = k < 60 ? 21 : 22;
  int m = k % 60;
  cout << h << ':' << setfill('0') << right << setw(2) << m << endl;
  return 0;
}