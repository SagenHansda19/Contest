#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> a(n);
    for(auto &i : a) cin >> i.first >> i.second;
    for(int i = 0; i < d; i++) {
        int an = 0;
        for(auto &x : a) {
            an += x.second + i;
        }
        cout << an << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

