#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    int forced_ones = 0;
    bool has_choice = false;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i] && a[i] == '1') {
            forced_ones++;
        }
        else if(a[i] != b[i]) {
            has_choice = true;
        }
    }
    
    if(forced_ones % 2 == 1 || (forced_ones % 2 == 0 && has_choice)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

