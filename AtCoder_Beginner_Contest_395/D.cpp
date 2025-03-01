#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> cont(n + 1);
    vector<int> cur(n + 1);
    vector<int> inv(n + 1);
    for (int i = 1; i <= n; i++) {
        cont[i] = i;
        cur[i]  = i;
        inv[i]  = i;
    }
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            cont[a] = inv[b];
        } 
        else if (t == 2) {
            int a, b;
            cin >> a >> b;
            int ca = inv[a], cb = inv[b];
            swap(inv[a], inv[b]);
            cur[ca] = b;
            cur[cb] = a;
        } 
        else if (t == 3) {
            int a;
            cin >> a;
            cout << cur[cont[a]] << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

