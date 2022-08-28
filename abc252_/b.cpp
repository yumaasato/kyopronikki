#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k, m;
	int a[100], b[100];
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < k; i++)cin >> b[i];
	m = -1;
	for (int i = 0; i < n; i++)m = max(m, a[i]);
	for (int i = 0; i < k; i++) {
		if (a[b[i] - 1] == m) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}