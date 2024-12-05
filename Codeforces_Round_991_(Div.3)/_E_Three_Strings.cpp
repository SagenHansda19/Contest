#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    
    int n = a.size(), m = b.size();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
    
    dp[0][0] = 0;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i > 0 && i + j - 1 < n + m) {
                int cost = (a[i - 1] != c[i + j - 1]) ? 1 : 0;
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + cost);
            }
            if (j > 0 && i + j - 1 < n + m) {
                int cost = (b[j - 1] != c[i + j - 1]) ? 1 : 0;
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + cost);
            }
        }
    }
    
    cout << dp[n][m] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
