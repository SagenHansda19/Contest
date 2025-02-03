#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) {
        cin >> i;
        i--;
    }
    if(n == k) {
        for(int i = 1; i < n; i += 2) {
            if(a[i] != i / 2) {
                cout << i / 2 + 1 << '\n';
                return;
            }
        }
        cout << k / 2 + 1 << '\n';
        return;
    }
    for(int i = 1; i <= n - k + 1; i++) {
        if(a[i] != 0) {
            cout << "1\n";
            return;
        }
    }
    cout << "2\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

