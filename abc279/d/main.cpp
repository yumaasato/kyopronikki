#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
using ll = long long;
// const ll INF = 1e18;
using P = pair<int, int>;

ll a, b;

int main() {
    cin >> a >> b;
    ll l = 0, r = 1e18;
    auto f = [&](ll x) {
        double res = (double) a / sqrt(x+1) + (double) b*x;
        return res;
    };
    while(r - l > 10) {
        ll n1 = (2*l + r) / 3;
        ll n2 = (l + 2*r) / 3;
        if(f(n1) > f(n2)) l = n1;
        else r = n2;
    }
    double ans = a;
    for(ll i = l; i <= r; i++) {
        ans = min(ans,f(i));
    }
    printf("%.10lf\n", ans);
}
