#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   int n, k;
   cin >> n >> k;
   vector<int> a(n);
   for(int &i : a) cin >> i;
   if(k == 1) {
       ll mx = 0, id = 0;
       for(int i = 0; i < n; i++) {
           if(a[i] > mx) {
               mx = a[i];
               id = i;
           }
       }
       if(id != 0 && id != n - 1) {
           cout << mx + max(a[0], a[n - 1]) << '\n';
           return;
       }
   }
   ll ans = 0;
   sort(a.rbegin(), a.rend());
   for(int i = 0; i <= k; i++) {
       ans += a[i];
   }
   cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
