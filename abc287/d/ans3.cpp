// E869120の解法
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

string S, T;
int cl, cr;

int main() {
	// Input
	cin >> S >> T;

	// Search
	cl = 0; cr = T.size();
	for (int i = 0; i < (int)T.size(); i++) {
		if (S[i] != '?' && T[i] != '?' && S[i] != T[i]) break;
		cl = max(cl, i + 1);
	}
	for (int i = (int)T.size() - 1; i >= 0; i--) {
		int idx = S.size() - T.size() + i;
		if (S[idx] != '?' && T[i] != '?' && S[idx] != T[i]) break;
		cr = min(cr, i);
	}

	// Output
	for (int i = 0; i <= (int)T.size(); i++) {
		if (cr <= i && i <= cl) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}