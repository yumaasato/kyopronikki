#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

using std::cin, std::cout, std::vector, std::sort, std::stable_sort;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    for (auto& e : a) cin >> e;
    for (auto& e : b) cin >> e;

    vector<int> s(n);
    std::iota(s.begin(), s.end(), 0);

    // 既に昇順なので不要
    // sort(s.begin(), s.end());
    stable_sort(s.begin(), s.end(), [&](int i, int j) { return a[i] > a[j]; });
    sort(s.begin() + x, s.end());
    stable_sort(s.begin() + x, s.end(), [&](int i, int j) { return b[i] > b[j]; });
    sort(s.begin() + x + y, s.end());
    stable_sort(s.begin() + x + y, s.end(), [&](int i, int j) { return a[i] + b[i] > a[j] + b[j]; });
    sort(s.begin(), s.begin() + x + y + z);

    for (int i = 0; i < x + y + z; i++)
        cout << (s[i] + 1) << '\n';
}
