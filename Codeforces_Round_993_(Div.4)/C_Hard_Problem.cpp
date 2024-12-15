#include <bits/stdc++.h>
using namespace std;

void solve() {
	int m, a, b, c;
	cin >> m >> a >> b >> c;
	int r1 = min(a, m);
    int r2 = min(b, m);
    int remr1 = m - r1;
    int remr2 = m - r2;
    int rest = min(c, remr1 + remr2);
    cout << r1 + r2 + rest << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    