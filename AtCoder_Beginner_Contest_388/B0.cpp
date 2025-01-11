#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> th(n), len(n);
    for(int i = 0; i < n; i++) {
        cin >> th[i] >> len[i];
    }
    for(int i = 1; i <= d; i++) {
        int mw = INT_MIN;
        for(int j = 0; j < n; j++) {
            mw = max(mw, th[j] * (len[j] + i));
        }
        cout << mw << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

