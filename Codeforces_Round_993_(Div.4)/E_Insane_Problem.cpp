#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    long long count = 0;
    long long power = 1;

    while (power <= r2) {
        long long x_min = max(l1, (l2 + power - 1) / power); 
        long long x_max = min(r1, r2 / power);

        if (x_min <= x_max) {
            count += (x_max - x_min + 1);
        }

        if (power > r2 / k) break; 
        power *= k;
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
