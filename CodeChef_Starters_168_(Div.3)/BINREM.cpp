nclude <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    
    vector<int> ones; 
    long long total_inv = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            ones.push_back(i);
        } else {
            total_inv += ones.size();
        }
    }
    
    if(total_inv == 0) {
        cout << 1 << "\n";
        return;
    }
    
    int ans = 2;  
    if(total_inv <= x && total_inv % k == 0) {
        ans = 1;
    }
    
    cout << ans << "\n";
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

