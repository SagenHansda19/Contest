#include <bits/stdc++.h>
using namespace std;

int perf_sq(long long n) {
	if(n >= 0) {
		long long sr = sqrt(n);
		return sr * sr == n;
	}
	return 1; 
}

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long tot = 0;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		tot += a[i];
		if(perf_sq(tot) && (int)sqrt(tot) % 2 != 0) {
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
    