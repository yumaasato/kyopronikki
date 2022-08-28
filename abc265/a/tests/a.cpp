#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

int main() {
  int x, y, n;
  vector<int> s{10000000};
  cin >> x >> y >> n;
  int sum;
  rep(i,0,n+1) rep(j,0,n+1) {
    if(n == i + 3*j) {
      sum = x*i + y*j;
      s.push_back(sum);
    }
  }
  sort(s.begin(), s.end());
  cout << s[0] << endl;
}