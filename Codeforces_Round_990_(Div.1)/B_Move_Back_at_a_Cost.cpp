#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> stk, b;
    for(int i = 0; i < n; i++) {
        while(!stk.empty() && a[i] < stk.back()) {
            b.push_back(stk.back() + 1);
            stk.pop_back();
        }
        stk.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    while(!b.empty() && stk.back() > b[0]) {
        b.push_back(stk.back() + 1);
        stk.pop_back();
    }
    sort(b.begin(), b.end());
    a = stk;
    for(auto x : b) {
        a.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    