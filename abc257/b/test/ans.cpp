// 番兵あり
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, q;
	int a[201];
	int x;

	cin >> n >> k >> q;
	for (int i = 1; i <= k; i++)cin >> a[i];
	a[k+1] = n+1; // 番兵

	for (int i = 0; i < q; i++) {
		cin >> x;
		if (a[x] + 1 < a[x + 1])a[x]++;
	}

	for (int i = 1; i <= k; i++) {
		cout << a[i];
		if (i < k)cout << " ";
		else cout << endl;
	}

	return 0;
}
