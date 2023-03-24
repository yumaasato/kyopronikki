#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, N, h, w;
    cin >> H >> W >> N >> h >> w;

    vector minX(N, H + 1);
    vector maxX(N, 0);
    vector minY(N, W + 1);
    vector maxY(N, 0);

    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            int a;
            cin >> a;
            a -= 1;
            minX[a] = min(minX[a], i);
            maxX[a] = max(maxX[a], i);
            minY[a] = min(minY[a], j);
            maxY[a] = max(maxY[a], j);
        }
    }

    for (int i = 0; i <= H - h; ++i) {
        for (int j = 0; j <= W - w; ++j) {
            int k = i + h, l = j + w, ans = N;
            for (int a = 0; a < N; ++a) {
                if (i < minX[a] and maxX[a] <= k and j < minY[a] and maxY[a] <= l) {
                    ans -= 1;
                }
            }
            cout << ans << " \n"[j == W - w];
        }
    }

    return 0;
}
