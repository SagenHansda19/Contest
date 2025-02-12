#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    
    if (y == x + 1) {
        cout << "YES\n";
    } else if (x % 9 == 0 && y == 1) {
        cout << "YES\n";
    } else if (y > x + 1) {
        cout << "NO\n";
    } else {
        int diff = x - y + 1;
        if (diff % 9 == 0 && diff >= 9) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


