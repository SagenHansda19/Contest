#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(m);
    for(int& x : a) cin >> x;
    
    set<int> b;
    int x;
    for(int i = 0; i < k; i++) {
        cin >> x;
        b.insert(x);
    }
    
    string r;
    r.reserve(m);
    
    for(int i = 0; i < m; i++) {
        int need = n - 1;
        auto it = b.find(a[i]);
        if(it != b.end()) {
            need++;
        }
        
        r += (b.size() >= need) ? '1' : '0';
    }
    
    cout << r << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}