#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int sum = max(0, min(b,d) - max(a,c)); // 共通区間

  cout << sum << endl;
}