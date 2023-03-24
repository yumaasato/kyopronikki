#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // 各人の受付状況を表す配列
    vector<bool> called(N, false);

    // 受付に呼ばれていない人の集合
    set<int> waiting;

    // 受付に呼ばれていない人を集合に追加する
    for (int i = 0; i < N; i++) {
        waiting.insert(i);
    }

    // 受付に呼ばれていない人のうち、最も小さい番号の人を表す変数
    int next_call = *waiting.begin();

    // Q回のイベントを処理する
    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            // 1種類目のイベント
            called[next_call] = true;
            waiting.erase(next_call);

            // 次に呼ぶ人を更新する
            if (!waiting.empty()) {
                next_call = *waiting.begin();
            }
        } else if (type == 2) {
            // 2種類目のイベント
            int x;
            cin >> x;
            called[x] = true;
        } else {
            // 3種類目のイベント
            bool found = false;
            for (int j = next_call; j < N; j++) {
                if (called[j] == false) {
                    next_call = j;
                    found = true;
                    break;
                }
            }
            if (!found) {
                // 全員が受付に行っている場合
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
