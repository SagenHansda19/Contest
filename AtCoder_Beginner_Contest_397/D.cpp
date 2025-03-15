#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool sq(ll n, ll &r) {
    if (n < 0) return false;
    r = sqrt(n);
    return r * r == n;
}

void solve() {
    ll n; cin >> n;
    ll md = pow(4 * n, 1.0 / 3) + 2;
    for (ll d = 1; d <= md; ++d) {
        if (n % d != 0) continue;
        ll nd = n / d;
        ll c = d * d;
        if (nd < c) continue;
        ll k = nd - c;
        if (k % 3 != 0) continue;
        k /= 3;
        ll disc = d * d + 4 * k;
        ll sd;
        if (!sq(disc, sd)) continue;
        ll num = -d + sd;
        if (num <= 0 || num % 2 != 0) continue;
        ll y = num / 2;
        ll x = y + d;
        if (x > 0 && y > 0) {
            cout << x << " " << y << '\n';
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

