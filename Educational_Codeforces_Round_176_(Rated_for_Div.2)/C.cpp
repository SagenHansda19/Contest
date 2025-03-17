#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> f(n + 1, 0);
    for (int i = 0; i < m; i++){
        int c;
        cin >> c;
        f[c]++;
    }
    
    vector<ll> F(n + 1, 0);
    F[n] = f[n];
    for (int i = n - 1; i >= 1; i--) {
        F[i] = F[i + 1] + f[i];
    }
    
    ll ans = 0;
    for (int i = 1; i <= n - 1; i++){
        int j = n - i;
        int req = (i >= j ? i : j);
        ll w = F[i] * F[j] - F[req];
        ans += w;
    }
    
    cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
