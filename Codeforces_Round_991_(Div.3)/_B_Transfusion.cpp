#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum1 = 0, sum2 = 0;
    ll e = 0, o = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            sum1 += a[i];
            e++;
        }
        else {
            sum2 += a[i];
            o++;
        }    
    }
    if(sum1 % e == 0 && sum2 % o == 0 && sum1 / e == sum2 / o) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
