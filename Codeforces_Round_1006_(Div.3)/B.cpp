#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, b = 0;
    for(char i : s) {
        if(i == '-') a++;
        else if(i == '_') b++;
    }
    if(a < 2 || b < 1) {
        cout << 0 << '\n';
        return;
    }
    ll x = a / 2;
    ll y = a - x;
    ll ans = x * y * b;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

