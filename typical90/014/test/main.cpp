#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  rep(i,0,n) cin >> a[i];
  rep(i,0,n) cin >> b[i];


  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll dist = 0;

  rep(i,0,n) dist += abs(a[i]-b[i]);
  cout << dist << endl;
}
