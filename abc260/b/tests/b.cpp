#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
using namespace std;

int a[1005], b[1005], c[1005];

int main() {
  int n,x,y,z; cin >> n >> x >> y >> z;

  rep(i,0,n) cin >> a[i] >> b[i];

  for(int i=0;i<x;i++) {
    int index=-1;
    rep(j,0,n)if(c[j]!= 1) {
      if(a[j] > a[index] || index == -1) index = j;
    }
      c[index] = 1;
  }

  for(int i=0;i<y;i++) {
    int index=-1;
    rep(j,0,n)if(c[j] != 1) {
      if(b[j] > b[index] || index == -1) index = j;
    }
      c[index] = 1;
  }

  for(int i=0;i<z;i++) {
    int index = -1;
  for(int j=0;j<n;j++)if(c[j] != 1) {
      if(a[j]+b[j] > a[index]+b[index] || index == -1) index = j;
    }
      c[index] = 1;
  }

  for(int i=0;i<n;i++)if(c[i] == 1) cout << i+1 << endl;

}