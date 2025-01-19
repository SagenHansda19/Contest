#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    int i = 1;
    while(n > 1) {
        n /= i;
        i++;
    }
    cout << i - 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

