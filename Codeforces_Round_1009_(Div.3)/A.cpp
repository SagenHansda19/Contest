#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    cout << (l == r && r == d && d == u ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

