#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    int x, y;
    cin >> x >> y;
    int px = x, py = y;
    int xa, ya;
    xa = px + m, ya = py + m;
    for(int i = 0; i < n - 1; i++) {
        //xa = px; ya = py;
        cin >> x >> y;
        px += x; py += y;
        ans += (2 * ((xa - px) + (ya - py)));
        xa = px + m; ya = py + m;
        //cout << ans << " " ;
    }
    cout << (long long)(4 * m * n) - ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

