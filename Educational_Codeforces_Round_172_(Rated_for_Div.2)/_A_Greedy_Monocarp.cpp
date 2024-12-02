#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int tot = 0, b = 0;
	sort(begin(a), end(a), greater<>());
	while(b < n && tot + a[b] <= k) {
		tot += a[b];
		b++;
	}
	cout << k - tot << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    