#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll cycle_sum = a + b + c;
    ll full_cycles = n / cycle_sum;
    ll tot = full_cycles * cycle_sum;
    ll days = 3 * full_cycles;

    if (tot >= n) {
        cout << days << '\n';
        return;
    }

    if (tot + a >= n) {
        cout << days + 1 << '\n';
        return;
    }
    if (tot + a + b >= n) {
        cout << days + 2 << '\n';
        return;
    }
    cout << days + 3 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
