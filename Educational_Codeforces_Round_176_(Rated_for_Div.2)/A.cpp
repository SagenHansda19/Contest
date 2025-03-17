#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if(n % 2 == 1) {
        ans++;
        n -= (k % 2 == 1 ? k : k - 1);
        k = (k % 2 == 1 ? k - 1 : k);
        ans += (n + k - 1) / k;
    } else {
        k = (k % 2 == 1 ? k - 1 : k);
        ans += (n + k - 1) / k;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

