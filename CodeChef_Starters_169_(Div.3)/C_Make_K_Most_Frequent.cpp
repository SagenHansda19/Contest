#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    unordered_map<int, int> fr;
    int mf = 0;
    int ans = 2;
    for(int i = 0; i < n; i++) {
        fr[a[i]]++;
        mf = max(mf, fr[a[i]]);
        if(mf == fr[k]) ans = 1;
    }
    if(fr[k] == mf) {
        cout << 0 << '\n';
        return;
    }
    fr.clear();
    mf = 0;
    for(int i = n - 1; i >= 0; i--) {
        fr[a[i]]++;
        mf = max(mf, fr[a[i]]);
        if(fr[k] == mf) ans = 1;
    }
    if(fr[k] == mf) {
        cout << 0 << '\n';
        return;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

