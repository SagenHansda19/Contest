#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll ans = 0;
    ll sti = 0;
    bool hti = false;
    ll pos = x;
    for (int i = 0; i < n && sti < k; ++i) {
        sti++;
        if (s[i] == 'L') pos--;
        else pos++;
        if (pos == 0) {
            ans++;
            hti = true;
            break;
        }
    }
    if (!hti) {
        cout << ans << "\n";
        return;
    }
    ll rem = k - sti;
    if (rem <= 0) {
        cout << ans << "\n";
        return;
    }
    ll m = 0;
    pos = 0;
    bool fm = false;
    for (char c : s) {
        m++;
        if (c == 'L') pos--;
        else pos++;
        if (pos == 0) {
            fm = true;
            break;
        }
    }
    if (fm) {
        ll cc = rem / m;
        ans += cc;
        rem %= m;
        pos = 0;
        bool add = false;
        ll step = 0;
        for (char c : s) {
            if (step >= rem) break;
            step++;
            if (c == 'L') pos--;
            else pos++;
            if (pos == 0) {
                add = true;
                break;
            }
        }
        if (add) ans++;
    } else {
        pos = 0;
        ll step = 0;
        bool add = false;
        for (char c : s) {
            if (step >= rem) break;
            step++;
            if (c == 'L') pos--;
            else pos++;
            if (pos == 0) {
                add = true;
                break;
            }
        }
        if (add) ans++;
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

