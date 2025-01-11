#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for(long long &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    int l = 0; 
    int r = n - 1;
    while(l < r) {
        if(a[l] * 2 <= a[r]) {
            ans++;
            l++;
            r--;
        }
        else l++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

