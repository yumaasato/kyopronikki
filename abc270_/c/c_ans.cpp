#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 入力
int N, X, Y, A[200009], B[200009];

// 深さ優先探索
vector<int> G[200009];
bool visited[200009];

// 深さ優先探索の跡
vector<int> Path, Answer;

void dfs(int pos) {
	// ゴール地点にたどり着いた！
	if (pos == Y) {
		Answer = Path;
		return;
	}
	// その他の場合
	visited[pos] = true;
	for (int i = 0; i < G[pos].size(); i++) {
		int nex = G[pos][i];
		if (visited[nex] == false) {
			Path.push_back(nex); // 頂点 nex を経路に追加
			dfs(nex);
			Path.pop_back(); // 頂点 nex を経路から削除
		}
	}
	return;
}

int main() {
	// 入力
	cin >> N >> X >> Y;
	for (int i = 1; i <= N - 1; i++) {
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

	// 深さ優先探索
	for (int i = 1; i <= N; i++) visited[i] = false;
	Path.push_back(X); // 頂点 1（スタート地点）を経路に追加
	dfs(X);

	// 答えの出力
	for (int i = 0; i < Answer.size(); i++) {
		if (i >= 1) cout << " ";
		cout << Answer[i];
	}
	cout << endl;
	return 0;
}