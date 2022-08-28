#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

int main() {
  int x,y,n;
  cin >> x >> y >> n;
  if (x * 3 > y) cout << (n/3) * y + (n%3) * x << endl;
  else cout << x * n << endl;
}