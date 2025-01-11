#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for(long long &i : a) cin >> i;
    long long ans = 0;
    //binary search
    for(int i = 0; i < n; i++) {
        int ub = upper_bound(a.begin(), a.end(), a[j] / 2) - a.begin();
        ans += ub;
    }
    //linear
    sort(a.begin(), a.end());
	int j = 0;
    for(int i = 0; i < n; i++) {
        while(j < n && a[i] * 2 > a[j]) j++;
        if(j < n) ans += n - j;
    }
    cout << ans << '\n';    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

