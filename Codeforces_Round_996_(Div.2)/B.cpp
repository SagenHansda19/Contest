#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;
    for(int i = 0; i < n; i++) {
        a[i] -= b[i];
    }
    sort(a.begin(), a.end());
    if(a[0] + a[1] >= 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;  
    while(t--) solve();  
    
    return 0;
}

