#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a;
	vector<int> f(14);
	for(int i = 0; i < 4; i ++) {
		cin >> a;
		f[a]++;
	}
	sort(f.rbegin(), f.rend());
	if(((f[0] == 3 && f[1] >= 1) || (f[0] == 2 && f[1] == 2))) cout << "Yes" << '\n';
	else cout << "No" << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
    