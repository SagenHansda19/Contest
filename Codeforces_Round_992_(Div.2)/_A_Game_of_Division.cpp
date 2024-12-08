#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
    cin >> n >> k;
    vector<int> a(n);    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool ans = true;
    int ansid = 0;
    for(int i = 0; i < n; i++) {
    	bool in = true;
    	for(int j = 0; j < n; j++) {
    		if(i != j) {
    			if(abs(a[i] - a[j]) % k == 0) {
    				in = false;
    				break;
    			}
    		}
    	}
    	if(in) ansid = i + 1;
    }
    if(ansid != 0) {
    	cout << "YES\n" << ansid << '\n'; 
    }
    else cout << "NO\n" ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    