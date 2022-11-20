#include <bits/stdc++.h>
using namespace std;
#define rep(i,N,M) for(int i=N; i<M; i++)
const int INF=1001001001;

int main(){
  int N; cin>>N;
  vector<int> A(N);
  rep(i,0,N) cin>>A[i];

  vector<vector<int> > G(2*N+5);
  rep(i,0,N){
    G[A[i]-1].push_back((i+1)*2-1);
    G[A[i]-1].push_back((i+1)*2);
  }

  vector<int> dist(2*N+1,INF); dist[0]=0;
  deque<int> D; D.push_back(0);
  while(!D.empty()){
    int now=D.front(); D.pop_front();
    for(auto nxt:G[now]){
      if(dist[nxt]!=INF){
        continue;
      }
      dist[nxt]=dist[now]+1;
      D.push_back(nxt);
    }
  }

  for(auto i:dist){
    cout<<i<<endl;
  }
}