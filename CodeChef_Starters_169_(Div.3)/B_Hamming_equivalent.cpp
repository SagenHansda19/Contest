#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int, int>> fr(n);
    for(int i = 0; i < n; i++) fr[i] = {a[i], i + 1};
    int flag = 0;
    for(int i = 0; i < n; i++) {
        int x = fr[i].first;
        int y = fr[i].second;
        int count1 = 0, count2 = 0;
        while(x > 0) {
            count1 += (x % 2);
            x /= 2;
        }
        while(y > 0) {
            count2 += (y % 2);
            y /= 2;
        }
        if(count1 == count2) flag = 1;
        else {
            flag = 0;
            break;
        }
    }
    if(flag == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

