#include <bits/stdc++.h>
using namespace std;

int n, st, en;
vector<vector<int>> adj;
vector<int> ans;
vector<bool> vis;
 
void dfs(int v) {
    vis[v] = true;
    ans.push_back(v);
    for (int u : adj[v]) {
        if (!vis[u]) {
            dfs(u);
        }
    }
}
 
void solve() {
    cin >> n >> st >> en;
    adj.assign(n + 1, vector<int>());
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    ans.clear();
    vis.assign(n + 1, false);
    dfs(en);  
    reverse(ans.begin(), ans.end());
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

