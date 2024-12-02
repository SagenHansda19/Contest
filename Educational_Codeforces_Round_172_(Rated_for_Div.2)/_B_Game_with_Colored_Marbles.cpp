#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
		b[a[i]]++;
	}
	int ans = count(b.begin(), b.end(), 1);
	ans = (ans + 1) / 2 * 2;
	for(int i = 0; i < n; i++) {
		ans += b[i] >= 2;
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
    