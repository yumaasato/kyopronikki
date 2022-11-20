#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

string s[200010];

int main() {
  int n; cin >> n;
  map<string,int> dict;

  re(i,n) {
    string s; cin >> s;
    dict[s]++;
  }

  int max = -1;

  for(auto item : dict) {
    if(item.second > max) max = item.second;
  }
  for(auto item : dict)  {
    if(item.second == max) cout << item.first << endl;
  }

}