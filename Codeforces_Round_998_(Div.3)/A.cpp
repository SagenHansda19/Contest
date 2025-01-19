#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int ans = 0;
    vector<int> pos;
    pos.push_back(a1 + a2);
    pos.push_back(a4 - a2);
    if(a5 >= a4) pos.push_back(a5 - a4);
    for(int a3 : pos) {
        int f = 0;
        if (a3 == a1 + a2) f++;
        if (a4 == a2 + a3) f++;
        if (a5 == a3 + a4) f++;
        ans = max(ans, f);
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

