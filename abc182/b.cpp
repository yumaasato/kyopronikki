#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int gcd(int a, int b) {
  if (b == 0) return a;
  else return gcd(b, a % b);
}

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  vector<int> cnt(1001);

  re(i,n) {
    cin >> a[i];
    for (int j = 2; j <= a[i]; ++j) {
      if (a[i] % j == 0) cnt[j]++;
    }
  }

  int num = 0;
  int index = 1;
  rrep(i,2,1000) {
    if(cnt[i] > num) {
      index = i;
      num = cnt[i];
    }
  }
  cout << index << endl;
}