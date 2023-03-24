#include <bits/stdc++.h>
using namespace std;

// 素因数分解
vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

// N が P で何回割れるか
long long how_many(long long N, long long P) {
    long long res = 0;
    while (N % P == 0) {
        N /= P;
        ++res;
    }
    return res;
}

int main() {
    long long N;
    cin >> N;
    auto pf = prime_factorize(N);
    long long res = 0;
    for (auto pa : pf) {
        long long p = pa.first, e = pa.second;
        long long sum = 0;
        for (long long m = p; m <= N; m += p) {
            sum += how_many(m, p);
            if (sum >= e) {
                res = max(res, m);
                break;
            }
        }
    }
    cout << res << endl;
}