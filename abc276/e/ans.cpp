#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;

int main() {
    int H, W;
    cin >> H >> W;
    vector<char> C(H * W);
    for (char& c : C) {
        cin >> c;
    }
    dsu uf(H * W);
    auto id = [&](int i, int j) {
        return i * W + j;
    };
    for (int i = 0; i < H - 1; ++i) {
        for (int j = 0; j < W; ++j) {
            if (C[id(i, j)] == '.' && C[id(i + 1, j)] == '.') {
                uf.merge(id(i, j), id(i + 1, j));
            }
        }
    }
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W - 1; ++j) {
            if (C[id(i, j)] == '.' && C[id(i, j + 1)] == '.') {
                uf.merge(id(i, j), id(i, j + 1));
            }
        }
    }
    int S = 0;
    while (C[S] != 'S') {
        S += 1;
    }
    vector<int> around;
    if (S / W != 0) {
        around.push_back(S - W);
    }
    if (S / W != H - 1) {
        around.push_back(S + W);
    }
    if (S % W != 0) {
        around.push_back(S - 1);
    }
    if (S % W != W - 1) {
        around.push_back(S + 1);
    }
    for (int x : around) {
        for (int y : around) {
            if (x != y and uf.same(x, y)) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
    return 0;
}