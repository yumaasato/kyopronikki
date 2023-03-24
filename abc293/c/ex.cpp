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
using i64 = long long;
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

int main() {
    int n, m;
    cin >> n >> m;

    vector lope(n, vector<int>(2));
    rep(i, n) {
        lope[i][0] = 1;
        lope[i][1] = 1;
    }

    dsu uf(n);

    rep(i, m) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--, c--;
        if(b == 'R') lope[a][0]++;
        else lope[a][1]++;
        if(d == 'R') lope[c][0]++;
        else lope[c][1]++;
        uf.merge(a, c);
    }

    int x = 0;
    int y = 0;

    for(auto v : uf.groups()) {
        // if(v.size() == 1) continue;
        int ok = 1;
        for(auto i : v) {
            if(lope[i][0] != 2 or lope[i][1] != 2) ok = 0;
        }
        if(ok) x++;
        else y++;
    }

    cout << x << " " << y << endl;

    return 0;
}