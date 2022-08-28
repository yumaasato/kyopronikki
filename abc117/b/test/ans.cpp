#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> l(n);

  rep(i,0,n) cin >> l[i];
  sort(l.begin(), l.end());

  int sum = 0;
  rep(i,0,n-1) sum += l[i];

  if(l[n-1] < sum) cout << "Yes" << endl;
  else cout << "No" << endl;
}
