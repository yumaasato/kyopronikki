#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  vector<int> a(10);
  rep(i,10) a[i] = i;
  int n1 = lower_bound(a.begin(),a.end(),6) - a.begin();
  int n2 = lower_bound(a.begin(),a.end(),3) - a.begin();
  cout << n1 - n2 << endl;
  return 0;
}