#include <iostream>
#include <vector>

using namespace std;

int main() {
    // プレイリストの曲数と T を受け取る
    int N;
    long long T;
    cin >> N >> T;

    // 各曲の長さを受け取る
    vector<ll> A(N);
    long long total_length = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total_length += A[i];
    }

    int song_num = 0;
    long long song_time = 0;
    while (T > 0) {
        T -= A[song_num];
        song_num = (song_num + 1) % N;
        song_time += A[song_num];
    }

    // 求めた曲の番号と時点を出力する
    cout << song_num << " " << song_time << endl;
    return 0;
}
