#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;

int main() {
  int y;
  cin >> y;
  rep(i, y, y+4) {
    if(i % 4==2) cout << i << endl;
  }
}