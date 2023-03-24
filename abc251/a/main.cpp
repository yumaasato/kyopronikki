#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  string s; cin >>s;
  if(s.size()==1) cout << s+s+s+s+s+s << endl;
  if(s.size()==2) cout << s+s+s << endl;;
  if(s.size()==3) cout << s+s << endl;
}