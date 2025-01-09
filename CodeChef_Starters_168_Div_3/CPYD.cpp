nclude <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    
    vector<int> first(n + 1, -1), last(n + 1, -1);
    for (int i = 0; i < n; i++) {
        if (first[a[i]] == -1) first[a[i]] = i;
        last[a[i]] = i;
    }
    
    int ans = 0;
    set<int> active;
    vector<bool> processed(n + 1, false);
    
    for (int i = 0; i < n; i++) {
        if (processed[a[i]]) continue;
        if (first[a[i]] == last[a[i]]) continue;
        
        int r = last[a[i]];
        active.clear();
        active.insert(a[i]);
        processed[a[i]] = true;
        
        bool changed;
        do {
            changed = false;
            for (int j = i; j <= r; j++) {
                if (processed[a[j]]) continue;
                if (first[a[j]] >= i && last[a[j]] <= r) {
                    active.insert(a[j]);
                    processed[a[j]] = true;
                } else if (first[a[j]] <= r && last[a[j]] > r) {
                    r = last[a[j]];
                    active.insert(a[j]);
                    processed[a[j]] = true;
                    changed = true;
                }
            }
        } while (changed);
        
        set<int> distinct;
        for (int j = i; j <= r; j++) {
            distinct.insert(a[j]);
        }
        ans += distinct.size();
    }
    
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
