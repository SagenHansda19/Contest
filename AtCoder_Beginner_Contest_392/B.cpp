#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_set<int> a;
    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        a.insert(val);
    }
    if(n - m == 0) {
        cout << 0 << '\n';
        return;
    }
    else {
        cout << n - m << '\n';
    }
    for(int i = 1; i <= n; i++) {
        if(a.find(i) == a.end()) cout << i << " ";
    } 
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

