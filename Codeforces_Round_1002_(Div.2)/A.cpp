#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    unordered_map<int, int> fa, fb;
    for(int i : a) fa[i]++;
    for(int i : b) fb[i]++;
    int sa = fa.size(), sb = fb.size();
    cout << (sa + sb >= 4 ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

