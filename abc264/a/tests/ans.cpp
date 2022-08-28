#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;

  string s = "atcoder";
  cout << s.substr(n-1,m-n+1) << endl;
}