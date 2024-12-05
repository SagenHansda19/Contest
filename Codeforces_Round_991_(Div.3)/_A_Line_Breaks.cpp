#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int len = 0, ans = 0;

	for (int i = 0; i < n && len + s[i].length() <= m; i++) {
    	len += s[i].length();
    	ans++;
	}

	cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    