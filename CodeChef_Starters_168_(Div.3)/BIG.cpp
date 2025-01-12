#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    cout << "1 ";
    int nme = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > nme) {
            cout << "1 ";
            nme = max(nme, a[i]);
        }
        else cout << "0 ";
    }
    cout << '\n';
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


