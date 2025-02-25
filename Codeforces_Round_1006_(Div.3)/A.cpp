#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    if(k < -n * p || k > n * p) {
        cout << "-1\n";
        return;
    }
    if(k == 0) {
        cout << "0\n";
        return;
    }
    int ans = 0;
    if(k > 0) {
        ans = (k + p - 1) / p;
    } else {
        ans = (-k + p - 1) / p;
    }
    ans = min(ans, n);
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

