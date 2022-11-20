#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
const long long INF = 1LL<<60;
typedef long long ll;

int main() {
  string s; cin >> s;
  if(s == "Monday") cout << 5 << endl;
  if(s == "Tuesday") cout << 4 << endl;
  if(s == "Wednesday") cout << 3 << endl;
  if(s == "Thursday") cout << 2 << endl;
  if(s == "Friday") cout << 1 << endl;
}