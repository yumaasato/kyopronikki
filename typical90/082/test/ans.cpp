#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const ll mod = 1000000007;
ull L, R;
ull power10[22];

ll modpow(ll a, ll b, ll m) {
	ll p = 1, q = a;
	for (int i = 0; i < 30; i++) {
		if ((b & (1LL << i)) != 0) { p *= q; p %= m; }
		q *= q; q %= m;
	}
	return p;
}

ll Div(ll a, ll b, ll m) {
	// Get the value of a/b
	return (a * modpow(b, m - 2, m)) % m;
}

void init() {
	// Calculate 10^i
	power10[0] = 1;
	for (int i = 1; i <= 19; i++) power10[i] = (10ULL * power10[i - 1]);
}

ll f(ll X) {
	// Calculate 1 + 2 + ... + X mod 1000000007
	ll v1 = X % mod;
	ll v2 = (X + 1) % mod;
	ll v = v1 * v2 % mod;
	return Div(v, 2, mod);
}

int main() {
	// Step #1. Initialize / Input
	init();
	cin >> L >> R;

	// Step #2. Brute Force by Digit-Size
	ll Answer = 0;
	for (int i = 1; i <= 19; i++) {
		ull vl = max(L, power10[i - 1]);
		ull vr = min(R, power10[i] - 1ULL);
		if (vl > vr) continue;
		ll val = (f(vr) - f(vl - 1) + mod) % mod;
		Answer += 1LL * i * val;
		Answer %= mod;
	}

	// Step #3. Output The Answer
	cout << Answer << endl;
	return 0;