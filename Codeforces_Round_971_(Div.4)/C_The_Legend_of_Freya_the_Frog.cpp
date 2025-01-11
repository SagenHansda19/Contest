#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    x = (x + k - 1) / k;
    y = (y + k - 1) / k;
    cout << max(2 * x - 1, 2 * y) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

