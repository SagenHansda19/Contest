#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sa = 0;
    bool b = false;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            if(!b) sa++;
            b = true;
        }
        else b = false;
    }
    if(sa == 0 || sa == 1) {
        cout << sa << '\n';
        return;
    }
    cout << 2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    