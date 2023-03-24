// BFS 
#include <bits/stdc++.h>
using namespace std;

int main() {

	int N,M;
	cin>>N>>M;
	vector<vector<int>> E(N);

	for(int i=0;i<M;i++){
		int u,v;
		cin>>u>>v;
		E[u-1].push_back(v-1);
	}

	int ans = 0;

	for(int i=0;i<N;i++){
		vector<bool> f(N,false);
		f[i] = true;
		queue<int> Q;
		Q.push(i);

		while(Q.size()>0){
			int x = Q.front();
			Q.pop();
			for(int j=0;j<E[x].size();j++){
				int y = E[x][j];
				if(f[y])continue;
				f[y] = true;
				Q.push(y);
				ans++;
			}
		}
	}

	ans -= M;
	cout<<ans<<endl;

	return 0;
}
