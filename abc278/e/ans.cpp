#include <algorithm>
#include <iomanip>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <vector>
#include <climits>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define _rep(i, n) _rep2(i, 0, n)
#define _rep2(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) GET_MACRO(__VA_ARGS__, _rep2, _rep)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
template<class T, class U>
bool chmin(T& a, const U& b) { return (b < a) ? (a = b, true) : false; }
template<class T, class U>
bool chmax(T& a, const U& b) { return (b > a) ? (a = b, true) : false; }

template<typename T>istream& operator>>(istream&i,vector<T>&v){rep(j,v.size())i>>v[j];return i;}
template<typename T>string join(vector<T>&v){stringstream s;rep(i,v.size())s<<' '<<v[i];return s.str().substr(1);}
template<typename T>ostream& operator<<(ostream&o,vector<T>&v){if(v.size())o<<join(v);return o;}
template<typename T>string join(vector<vector<T>>&vv){string s="\n";rep(i,vv.size())s+=join(vv[i])+"\n";return s;}
template<typename T>ostream& operator<<(ostream&o,vector<vector<T>>&vv){if(vv.size())o<<join(vv);return o;}
template<class T> using pq = priority_queue<T, vector<T>, greater<T>>;

// int main() {
//     // 入力: H × W のグリッド
//     int H, W; cin >> H >> W;
//     vector<vector<int> > a(H, vector<int>(W));
//     for (int i = 0; i < H; ++i) for (int j = 0; j < W; ++j) cin >> a[i][j];

//     // 二次元累積和
//     vector<vector<int> > s(H+1, vector<int>(W+1, 0));
//     for (int i = 0; i < H; ++i)
//         for (int j = 0; j < W; ++j)
//             s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + a[i][j];

//     // クエリ [x1, x2) × [y1, y2) の長方形区域の和
//     int Q; cin >> Q;
//     for (int q = 0; q < Q; ++q) {
//         int x1, x2, y1, y2;
//         cin >> x1 >> x2 >> y1 >> y2;
//         cout << s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1] << endl;
//     }
// }

int main() {
    ll H, W, N, h, w;
    cin >> H >> W >> N >> h >> w;

    vector A(H, vector<ll>(W));
    for(auto & v : A) cin >> v;

    int max_num = 310;
    vector sum(max_num, vector(H + 1, vector<ll>(W + 1)));
    vector<ll> sum2(max_num);
    rep(i, H) {
        rep(j, W) {
            rep(k, max_num) {
                sum[k][i + 1][j + 1] = sum[k][i][j + 1] + sum[k][i + 1][j] - sum[k][i][j] + (A[i][j] == k);
            }
            sum2[A[i][j]]++;
        }
    }

    rep(i, H) {
        vector<int> anss;
        rep(j, W) {
            int ans = 0;
            if(!(i + h - 1 < H and j + w - 1 < W)) continue;
            rep(k, max_num) {
                // [i, i + h), [j, j + w) の長方形の和
                int now = sum[k][i + h][j + w] - sum[k][i + h][j] - sum[k][i][j + w] + sum[k][i][j];
                if(sum2[k] - now > 0) ans++;
            }
            anss.push_back(ans);
        }
        if(anss.size()) cout << anss << endl;
    }

    return 0;
}