#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(auto &i : a) {
        for(int &j : i) cin >> j;
    }
    vector<long long> sum(n);
    for (int i = 0; i < n; ++i) {
        sum[i] = accumulate(a[i].begin(), a[i].end(), 0LL);
    }
    vector<long long> score(n);
    for (int i = 0; i < n; ++i) {
        long long pre = 0;
        for (int j = 0; j < m; ++j) {
            pre += a[i][j];
            score[i] += pre;
        }
    }
    vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int x, int y) {
        return sum[x] > sum[y];
    });
    vector<int> cc;
    for (int i : order) {
        cc.insert(cc.end(), a[i].begin(), a[i].end());
    }
    long long ans = 0;
    long long pre = 0;
    for (int x : cc) {
        pre += x;
        ans += pre;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
