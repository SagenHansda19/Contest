#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n, -1);
	int c = 0;	
	for(int i = k - 1; i < n; i += k) {
		a[i] = ++c;
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == -1) {
			a[i] = ++c;
		}
		cout << a[i] << " \n"[i == n - 1]; 
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    