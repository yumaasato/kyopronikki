#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> l(n);

  int suml = 0;
  int maxl = 0;

  rep(i,0,n) {
    cin >> l[i];
    suml += l[i];
    if(l[i] > maxl) maxl = l[i];
  }
  suml -= maxl;

  if(maxl < suml) cout << "Yes" << endl;
  else cout << "No" << endl;
}
