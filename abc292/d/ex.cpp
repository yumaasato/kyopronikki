#include <bits/stdc++.h>
using namespace std;

// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<bool> &seen) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        dfs(v2, G, seen);
    }
    return;
}

int main() {
    // 入力を受け取る
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);   // グラフを表現する隣接リスト
    for(int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        // 頂点 a から頂点 b への辺を隣接リストに入れる
        G[a].push_back(b);
        // 無向グラフのため、頂点 b から頂点 a への辺を隣接リストに入れる
        G[b].push_back(a);
    }

    vector<bool> seen(N, false);    // seen[v]：頂点 v が探索済みなら true, そうでないなら false
      vector<int> s(N), deg(N);
    for(int v = 0; v < N; ++v) {
        // 頂点 v がすでに訪問済みであれば、スキップ
        if(seen[v]) {continue;}
        // そうでなければ、頂点 v を含む連結成分は未探索
        // 深さ優先探索で新たに訪問し、答えを 1 増やす
        dfs(v, G, seen);

    }

	return 0;
}