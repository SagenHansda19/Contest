#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    bool pr = false, su = false;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == 'p') pr = true;
    }
    for(int i = 1; i < n; i++) {
        if(s[i] == 's') su = true;
    }
    (pr & su) ? cout << "NO" << '\n' : cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}