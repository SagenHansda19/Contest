#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	int n = s.length();
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if (s[i] == '0') {
            int cnt = 0;
            while (i < n && s[i] == '0') {
                cnt++;
                i++;
            }
            ans += (cnt + 1) / 2;
            i--;
        }
		else ans++;
	}
	cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
    