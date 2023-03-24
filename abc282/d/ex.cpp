#include <bits/stdc++.h>
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector G(N,vector<int>(N,0));
    for(int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        a--; b--;
        G[a][b] = 1;
        G[b][a] = 1;
    }

    vector<int> color(N, -1);   // color[v]：頂点 v の色が黒なら 1, 白なら 0, 未探索なら -1
  string ans = "Yes";
  int cnt = 0;

  rep(a,N)rrep(b,a+1,N-1) {
    if(G[a][b] != 0 || G[b][a] != 0) break;
    G[a][b] = 1; G[b][a] = 1;
    for(int v = 0; v < N; ++v) {
        if(color[v] != -1) {continue;}
        queue<int> que;
        color[v] = 0;
        que.push(v);
        while(que.size() > 0) {
            int qv = que.front();
            que.pop();
            rep(nv,N) {
              if(G[qv][nv] == 0) continue;
                if(color[nv] != -1) {
                    if(color[nv] == color[qv]) {ans = "No";}
                    continue;
                }
                color[nv] = 1 - color[qv];
                que.push(nv);
            }
        }
      if(ans == "Yes") cnt++;
    }
    G[a][b] = 0;
    G[a][b] = 0;
  }
  cout << cnt << endl;
  return 0;
}