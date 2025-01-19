#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    for (int i = 0; i < n - 1; i++) {
        int reduce = min(a[i], a[i + 1]);
        a[i] -= reduce;
        a[i + 1] -= reduce;
        if (a[i] > a[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

