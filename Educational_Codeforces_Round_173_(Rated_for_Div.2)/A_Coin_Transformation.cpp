#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n; cin >> n;
	if(n <= 3) {
		cout << 1 << '\n';
		return;
	}
	int h = floor(log(n) / log(4));
	cout << (int)pow(2, h) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    