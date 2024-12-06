#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	vector<int> vals;
	int x = 0;
	for(int i = n - 1; i > 0; i--) {
		x += (s[i] == '1' ? 1 : -1);
		if(x > 0) vals.push_back(x);
	}
	sort(vals.begin(), vals.end(), greater<>());
	int ans = 1, sum = 0;
	for(int i = 0; i < vals.size(); i++) {
		sum += vals[i];
		ans++;
		if(sum >= k) {
			cout << ans << '\n';
			return;
		}
	}
	cout << -1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}