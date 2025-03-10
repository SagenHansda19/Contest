#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int m = 2 * n;
    vector<ll> b(m);
    for(ll &i : b) cin >> i;
    sort(b.begin(), b.end());
    ll osum = 0, esum = 0;
    for(int i = 0; i < n; i++) {
        osum += b[i];
    }
    for(int i = n; i < m; i++) {
        esum += b[i];
    }
    ll x = esum - osum;
    bool xinb = binary_search(b.begin(), b.end(), x);
    if(xinb) {
        ll nx = 1;
        while(true) {
            if(!binary_search(b.begin(), b.end(), nx)) {
                x = nx;
                break;
            }
            nx++;
        }
    }
    vector<ll> a;
    a.push_back(x);
    for(int i = n; i < m; i++) {
        a.push_back(b[i]);
    }
    for(int i = 0; i < n; i++) {
        a.push_back(b[i]);
    }
    sort(a.begin(), a.end());
    assert(unique(a.begin(), a.end()) == a.end());
    //cout << x << " ";
    //for(int i = n; i < m; i++) cout << b[i] << " ";
    //for(int i = 0; i < n; i++) cout << b[i] << " ";
    for(int i : a) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

