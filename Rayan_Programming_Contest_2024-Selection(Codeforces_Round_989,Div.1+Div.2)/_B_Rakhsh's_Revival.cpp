#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	string s; cin >> s;
	int l = s.length();
	int ans = 0;
	int zs = 0;
	for(int i = 0; i < l; i++) {
		if(s[i] == '0') {
			zs++;
		}
		else zs = 0;
		if(zs == m) {
			ans++;
			for(int j = 0; j < k && i + j < n; j++) {
				s[i + j] = '1';
			}
			zs = 0;
		}
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
    	solve();
    }
    return 0;
}
    