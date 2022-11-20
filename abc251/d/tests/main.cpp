#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int w; cin >> w;
  cout << 297 << endl;
  rrep(i,1,99) {
    cout << i << endl;
    cout << i * 100 << endl;
    cout << i * 10000 << endl;
  }
}