#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	if(k == 1) {
		for(int i = 0; i < n; i++) {
			cout << k << " ";
			k++;
		}
		cout << '\n';
		return;
	}
	int as = (n + k - 1) / k;
	vector<int> a(as * k);
	// cout << as << "\n";
	int fix = as / 2;
	int ct = 1, tt = 0;
	for(int i = 0; i < as; i++) {
		int cix = fix;
		if(i % 2 == 0) {
			cix = fix + tt;
			tt++;
		}
		else cix = fix - tt;
		for(int j = 0; j < k; j++) {
			if(ct > n) break;
			a[cix] = ct;
			cix += k;
			ct++;
		}
	} 
	vector<int> ans;
	for(int i = 0; i < a.size(); i++) {
		if(a[i] != 0) ans.push_back(a[i]);
	}
	for(int i : ans) {
		cout << i << " ";
	}
	cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    