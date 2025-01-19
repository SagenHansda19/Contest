nclude <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> g(n, vector<int>(m));
    for(auto &i : g) {
        for(int &j : i) cin >> j;
        sort(i.begin(), i.end());
    }
    
    vector<pair<int,int>> firstCards(n);
    for(int i = 0; i < n; i++) {
        firstCards[i] = {g[i][0], i + 1};
    }
    sort(firstCards.begin(), firstCards.end());
    
    for(int i = 0; i < n; i++) {
        if(firstCards[i].first != i) {
            cout << "-1\n";
            return;
        }
    }
    
    for(int i = 0; i < n; i++) {
        int cowIdx = firstCards[i].second - 1;
        for(int j = 0; j < m; j++) {
            if(g[cowIdx][j] != i + j * n) {
                cout << "-1\n";
                return;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << firstCards[i].second << (i == n-1 ? '\n' : ' ');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
