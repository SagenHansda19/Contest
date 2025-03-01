#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<char>> g(n, vector<char>(n, '.'));
    for (int i = 1; i <= n; i++) {
        int j = n + 1 - i;
        if (i > j) continue; 
        char c = (i % 2 == 1) ? '#' : '.';
        for (int x = i - 1; x < j; x++) {
            for (int y = i - 1; y < j; y++) {
                g[x][y] = c;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << g[i][j];
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

