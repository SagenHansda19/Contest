#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> fr;
    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        fr[b]++;
    }
    vector<int> a;
    for(auto [_, x] : fr) a.push_back(x);
    sort(a.begin(), a.end());
    int ans = a.size();
    for(int i = 0; i < a.size() - 1; i++) {
        if(k >= a[i]) {
            ans--;
            k -= a[i];
        }
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

