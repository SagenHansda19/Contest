#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> l(n), r(n);
    vector<int> cnt(2 * n);
    vector<int> pre(2 * n + 1);
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        l[i]--;
        if(l[i] + 1 == r[i]) {
            cnt[l[i]]++;
        }
    }
    for(int i = 0; i < 2 * n; i++) {
        pre[i + 1] = pre[i] + (cnt[i] == 0);
    }
    for(int i = 0; i < n; i++) {
        if(l[i] + 1 < r[i]) {
            cout << (pre[l[i]] != pre[r[i]]);
        } else {
            cout << (cnt[l[i]] == 1);
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
