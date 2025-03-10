#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    if(k % 2 == 0) {
        for(int i = 1; i < n - 1; i++) {
            a[i] = n - 1;
        }
        a[n - 1] = n;
        a[n] = n - 1;
    } else {
        for(int i = 1; i < n; i++) {
            a[i] = n;
        }
        a[n] = n - 1;
    }
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " \n"[i == n];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

