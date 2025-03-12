#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> mm;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mm.push(x);
    }
    while(mm.size() > 1) {
        int a = mm.top(); mm.pop();
        int b = mm.top(); mm.pop();
        int c = a + b - 1;
        mm.push(c);
    }
    cout << mm.top() << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

