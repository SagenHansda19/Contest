#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size(), ans = 0;
    auto is_1100 = [&](int i) {
        if(i < 0 || i + 4 > n) return false;
        return s.substr(i, 4) == "1100";
    };
    for(int i = 0; i < n; i++) {
        ans += is_1100(i);
    }
    int q; cin >> q;
    while(q--) {
        int u;
        cin >> u;
        u--;
        for(int i = u - 3; i <= u; i++) {
            ans -= is_1100(i);
        }
        cin >> s[u];
        for(int i = u - 3; i <= u; i++) {
            ans += is_1100(i);
        }
        cout << (ans > 0 ? "YES\n" : "NO\n");
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

