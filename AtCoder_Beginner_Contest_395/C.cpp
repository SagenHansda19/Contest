#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    unordered_map<int, int> la;
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (la.find(a[i]) != la.end()) {
            ans = min(ans, i - la[a[i]] + 1);
        }
        la[a[i]] = i;
    }

    if (ans == INT_MAX) cout << -1 << '\n';
    else cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

