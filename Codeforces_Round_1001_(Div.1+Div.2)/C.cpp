#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;
    long long ans = accumulate(a.begin(), a.end(), 0LL);
    for(int i = 1; i < n; i++) {
        vector<ll> b(a.size() - 1);
        for(int j = 0; j < b.size(); j++) {
            b[j] = a[j + 1] - a[j];
        }
        ll c = accumulate(b.begin(), b.end(), 0LL);
        ans = max(ans, abs(c));
        a = b;
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

