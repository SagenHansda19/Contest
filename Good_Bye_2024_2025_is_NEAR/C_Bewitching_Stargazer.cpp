#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll lky = 0;
    ll segsize = 1;
    ll mlp = n + 1;

    while (n >= k) {
        if (n % 2 == 1) {
            lky += segsize;
        }
        n = n / 2;
        segsize *= 2;
    }
    
    cout << (mlp * lky) / 2 << '\n';


    // auto divd = [&](ll l, ll r, auto& divd) -> void {
    //     ll len = r - l + 1;
    //     if(len < k) return;
    //     ll m = (l + r) / 2;

    //     if(len % 2 == 1) {
    //         lky += m;
    //         if(l != r) {
    //             divd(l, m - 1, divd);
    //             divd(m + 1, r, divd);
    //         }
    //     } else {
    //         divd(l, m, divd);
    //         divd(m + 1, n, divd);
    //     }
    // };
    // divd(1, n, divd);
    // cout << m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
 