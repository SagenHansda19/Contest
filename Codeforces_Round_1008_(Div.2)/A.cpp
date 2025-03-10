#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(n == 1) {
        cout << (x == a[0] ? "Yes\n" : "No\n");
        return;
    }
    long long sum = 0;
    for(int i : a) sum += i;
    cout << (sum == x * n ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

