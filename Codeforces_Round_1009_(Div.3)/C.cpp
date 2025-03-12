#include <bits/stdc++.h>
using namespace std;

bool is(int x) {
    return (x & (x - 1)) == 0;
}

void solve() {
    int x; cin >> x;
    if(is(x)) {
        cout << "-1\n";
        return;
    }
    int h = 1 << (31 - __builtin_clz(x));
    int y = h - 1;
    int xr = x ^ y;
    cout << (y < x && (x + y > xr) && (y + xr > x) ? y : -1);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

