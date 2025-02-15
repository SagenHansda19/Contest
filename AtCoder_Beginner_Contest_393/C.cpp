#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, e;
    cin >> n >> e;
    int ans = 0;
    set<pair<int, int>> g;
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        if(u == v) {
            ans++;
            continue;
        }
        int x = min(u, v);
        int y = max(u, v);
        if(g.find({x, y}) != g.end()) {
            ans++;
        } else {
            g.insert({x, y});  
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

