#include <iostream>
#include <vector>
using namespace std;
using ll = int64_t;

int main(){
    ll n;
    cin >> n;
    vector<ll> cnt(1000002);
    for(ll i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b + 1]--;
    }
    for(ll i = 0; i + 1 < cnt.size(); i++) cnt[i + 1] += cnt[i];
    ll ans = 0;
    for(ll i = 0; i < cnt.size(); i++) ans += cnt[i] * i;
    cout << ans << endl;
}
