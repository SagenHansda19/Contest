#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	unordered_map<char, int> f;
	for(char c : s) f[c]++;
	char maxc = s[0];
	for(const auto& [k, v] : f) {
		if(v > f[maxc]) maxc = k;
	}

	for(int i = 0; i < n; i++) {
		if(s[i] != maxc) {
			s[i] = maxc;
			break;
		}
	}
	cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    