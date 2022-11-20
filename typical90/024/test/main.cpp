#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n;
  ll k;
  vector<int> a(n+1);
  vector<int> b(n+1);
  
  cin >> n >> k;
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  bool can = true;
  int dist = 0;
  rep(i,n) dist += abs(a[i]-b[i]);

  if(k < dist) can = false;
  if(dist % 2 != k % 2) can = false;

  if(can) cout << "Yes" << endl;
  else cout << "No" << endl;
}