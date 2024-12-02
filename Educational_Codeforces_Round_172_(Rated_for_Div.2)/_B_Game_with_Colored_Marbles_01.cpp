#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	map<int, int> f;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		f[a[i]]++;
	}
	int ans = 0;
	int freq1 = 0;
	for(auto [k, v] : f) {
		if(v == 1) freq1++; 
	}
	ans += (freq1 + 1) / 2;
	ans *= 2;
	for(auto [k, v] : f) {
		if(v > 1){
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    