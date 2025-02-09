#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    if(n == 1) {
        cout << "Yes\n";
        return;
    }
    int b0 = b[0];
    int prev = INT_MIN;
    
    for (int i = 0; i < n; ++i) {
        int val1 = a[i];
        int val2 = b0 - a[i];
        
        if (val1 >= prev && val2 >= prev) {
            prev = min(val1, val2);
        } else if (val1 >= prev) {
            prev = val1;
        } else if (val2 >= prev) {
            prev = val2;
        } else {
            cout << "NO\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

