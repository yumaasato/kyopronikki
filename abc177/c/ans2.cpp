// 差分を用いて区間和を計算する解法
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	int mod = 1000000007;
	long long sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
		sum %= mod;
	}

	long ans = 0;

	//i について全探索する
	for (int i = 0; i < N; i++)
	{
		//A[i+1] ... A[N] の値を更新する
		sum -= A[i];
		if (sum < 0) sum += mod;

		ans += A[i] * sum;
		ans %= mod;
	}

	cout << ans << endl;
}

