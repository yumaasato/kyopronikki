#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
typedef long long ll;

ll N, M, Sum = 0, Answer = 0;
ll A[400009];

int main() {
	// 入力
	cin >> N >> M;
	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int i = 1; i <= N; i++) Sum += A[i];
	sort(A + 1, A + N + 1);
	for (int i = 1; i <= N; i++) A[i + N] = A[i] + M;

	// 場合分け
	bool flag = true;
	for (int i = 1; i <= N; i++) {
		if (A[i + 1] - A[i] >= 2) flag = false;
	}
	if (flag == true) {
		cout << "0" << endl;
		return 0;
	}

	// 探索
	int cx = 0; ll ret = 0;
	while (cx < 2 * N) {
		ret += A[cx] % M;
		Answer = max(Answer, ret);
		if (A[cx + 1] - A[cx] >= 2) {
			ret = 0;
		}
		cx++;
	}

	// 出力
	cout << Sum - Answer << endl;
	return 0;
}