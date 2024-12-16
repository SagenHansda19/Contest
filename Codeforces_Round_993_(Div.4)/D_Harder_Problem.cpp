#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1, 0), freq(n + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    int p = 1;
    for(int i = 0; i < n; i++) {
        if(b[a[i]] == 0) {
            cout << a[i] << " ";
            b[a[i]] = 1;
        }
        else {
            while(freq[p] != 0) {
                p++;
            }
            cout << p << " ";
            p++;
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
