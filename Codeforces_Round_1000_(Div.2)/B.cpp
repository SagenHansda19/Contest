#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    l--;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> ll(a.begin(), a.begin() + r);
    vector<int> rr(a.begin() + l, a.end());
    sort(ll.begin(), ll.end());
    sort(rr.begin(), rr.end());
    cout << min(accumulate(ll.begin(), ll.begin() + r - l, 0LL), accumulate(rr.begin(), rr.begin() + r - l, 0LL)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

