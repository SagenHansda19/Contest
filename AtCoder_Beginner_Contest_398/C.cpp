#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> f;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    int mm = -1;
    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(f[a[i]] == 1 && a[i] > mm) {
            mm = a[i];
            ans = i + 1;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

