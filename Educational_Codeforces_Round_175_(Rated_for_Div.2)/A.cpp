#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    ll a = n / 15;
    ll rm = n % 15;
    ll ans = a * 3;
    ans += min(rm + 1, 3LL);
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

