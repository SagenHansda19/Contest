#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n; ll x, y; cin>>n>>x>>y;
    vector<ll> a(n); for (int i = 0; i<n; i++) cin>>a[i];
 
    sort(a.begin(), a.end());
 
    ll tot = 0; for (auto it: a) tot+=it;
    swap(x, y); x = tot - x; y = tot - y;
 
    auto calc = [&](ll lim) //with sum <= lim
    {
        ll ans = 0;
        int cur = -1;
        for (int i = n-1; i>=0; i--)
        {
            cur = min(cur, i-1);
            while (cur+1 < i && a[cur+1] + a[i] <= lim) cur++;
            ans+=(cur+1);
        }
        return ans;
    };
 
    cout<<calc(y) - calc(x-1)<<endl;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}