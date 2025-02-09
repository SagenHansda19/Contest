#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    sort(b.begin(), b.end());
    int prev = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int val1 = a[i];
        bool p1 = (val1 >= prev);

        int target = prev + a[i];
        auto it = lower_bound(b.begin(), b.end(), target);
        bool p2 = (it != b.end());
        int val2 = p2 ? (*it - a[i]) : 0;

        if (p1 && p2) {
            prev = min(val1, val2);
        } else if (p1) {
            prev = val1;
        } else if (p2) {
            prev = *it - a[i];
        } else {
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
