#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int n;
string s[1<<18];
map<string, int> Map;

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
		cin >> s[i];
		if (Map[s[i]] == 0) {
			Map[s[i]] = 1;
			cout << i << endl;
		}
	}





}