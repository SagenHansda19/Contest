#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(begin(a), end(a), greater<>());
	int tot = 0;
	for(int i = 0; i < n; i++){
		if(tot + a[i] > k) break;
		tot += a[i];
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