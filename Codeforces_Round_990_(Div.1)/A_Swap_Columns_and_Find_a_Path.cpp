#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector a(2, vector<int>(n));
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
	long long ans = 0; 
	int mx = INT_MIN;
	for(int i = 0; i < n; i++) {
		ans += max(a[0][i], a[1][i]);
		mx = max(mx, min(a[0][i], a[1][i]));
	}
	ans += mx;
	cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    