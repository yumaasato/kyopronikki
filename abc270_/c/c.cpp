#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int n,x,y;

vector<int> G[200009];
bool visited[200009];

vector<int> Path, Answer;

void dfs(int pos) {
	if (pos == y) {
		Answer = Path;
		return;
	}
	visited[pos] = true;
	for (int i = 0; i < G[pos].size(); i++) {
		int nex = G[pos][i];
		if (visited[nex] == false) {
			Path.push_back(nex);
			dfs(nex);
			Path.pop_back();
		}
	}
	return;
}

int main() {
  cin >> n >> x >> y;
	for (int i = 1; i <= n-1; i++) {
    int a,b; cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) visited[i] = false;
	Path.push_back(x);
	dfs(x);

	for (int i = 0; i < Answer.size(); i++) {
		if (i >= 1) cout << " ";
		cout << Answer[i];
	}
	cout << endl;
	return 0;
}