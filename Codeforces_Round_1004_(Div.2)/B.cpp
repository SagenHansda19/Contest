#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> f(n + 1);
    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        f[a]++;
    }
    for(int i = 1; i < n; i++) {
        if(f[i] == 0) continue;
        else if(f[i] == 1) {
            cout << "No" << '\n';
            return;
        }
        f[i] -= 2;
        f[i + 1] += f[i];
        f[i] = 2;
    }
    for(int i = 1; i <= n; i++) {
        if(f[i] % 2) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
