#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;    
    map<int, int> cnt;
    for(auto i : a) cnt[i]++;
    vector<bool> b(n, false);
    for(int i = 0; i < n; i++) {
        if(cnt[a[i]] == 1) b[i] = true;
    } 
    vector<pair<int, int>> segs;
    int cur = -1;
    for(int i = 0; i <= n; i++) {
        if(i < n && b[i]) {
            if(cur == -1) cur = i;
        } else {
            if(cur != -1) segs.push_back({cur, i - 1});
            cur = -1;
        }
    }
    if(segs.size() == 0) {
        cout << 0 << '\n';
        return;
    }
    pair<int, int> best = {1, 0};
    for(auto pr : segs) {
        if(pr.second - pr.first + 1 > best.second - best.first + 1) best = pr;
    }
    cout << best.first + 1 << " " << best.second + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
