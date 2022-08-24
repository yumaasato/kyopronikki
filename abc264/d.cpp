#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int main() {
  string s;
  cin >> s;

  map<string, int> mp;
  queue<string> q;

  mp[s] = 0;
  q.push(s);

  while(!q.empty()) {
    // キューから頂点を取り出す
    string current = q.front();
    q.pop();
    
    if(current=="atcoder") {
      cout << mp[current] << "\n";
      return 0;
    }

    rep(i,1,7) {
      string next= current;
      swap(next[i-1],next[i]);
      if(mp.find(next)==mp.end()) {
        q.push(next);
        mp[next]=mp[current]+1;
      }
    }
  }
}