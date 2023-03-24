#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <tuple>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int N, M, K, A[1 << 20], B[1 << 20], C[1 << 20], S[1 << 20];
int dist[1 << 20][2];
bool IsSwitch[1 << 20];
vector<pair<int, int>> G[1 << 20];
priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> Q;

int main() {
	// 入力
	cin >> N >> M >> K;
	for (int i = 1; i <= M; i++) {
		cin >> A[i] >> B[i] >> C[i];
		G[A[i]].push_back(make_pair(B[i], C[i]));
		G[B[i]].push_back(make_pair(A[i], C[i]));
	}
	for (int i = 1; i <= K; i++) {
		cin >> S[i];
		IsSwitch[S[i]] = true;
	}

	// 配列の初期化
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 2; j++) dist[i][j] = (1 << 30);
	}

	// 幅優先探索
	dist[1][0] = 0;
	Q.push(make_tuple(0, 1, 0));
	while (!Q.empty()) {
		int pos1 = get<1>(Q.top());
		int pos2 = get<2>(Q.top());
		Q.pop();
		for (int i = 0; i < G[pos1].size(); i++) {
			if ((G[pos1][i].second ^ pos2) == 0) continue;
			int to = G[pos1][i].first;
			if (dist[to][pos2] > dist[pos1][pos2] + 1) {
				dist[to][pos2] = dist[pos1][pos2] + 1;
				Q.push(make_tuple(dist[to][pos2], to, pos2));
			}
		}
		if (dist[pos1][pos2 ^ 1] > dist[pos1][pos2] + 0 && IsSwitch[pos1] == true) {
			dist[pos1][pos2 ^ 1] = dist[pos1][pos2] + 0;
			Q.push(make_tuple(dist[pos1][pos2 ^ 1], pos1, (pos2 ^ 1)));
		}
	}

	// 出力
	int Answer = min(dist[N][0], dist[N][1]);
	if (Answer == (1 << 30)) Answer = -1;
	cout << Answer << endl;
	return 0;
}