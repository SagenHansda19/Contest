#include <bits/stdc++.h>
using namespace std;

void solve() {
    double x; cin >> x;
    cout << (x >= 38.0 ? 1 : (x >= 37.5 && x < 38.0 ? 2 : 3));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

