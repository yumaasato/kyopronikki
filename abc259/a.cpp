#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  int n,m,x,t,d;
  cin >> n >> m >> x >> t >> d;

  if(m >= x) {
    cout << t << endl;
    exit(0);
  }
  int num = t;

  drep(i,n,m) {
    if(i < x) num -= d;
    else continue;
  }
  cout << num << endl;
}


