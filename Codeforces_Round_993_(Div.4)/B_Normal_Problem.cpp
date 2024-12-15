#include <bits/stdc++.h>
using namespace std;

void solve() {
	string a; cin >> a;
	string b = "";
	int n = a.length();
	for(int i = n - 1; i >= 0; i--) {
		if(a[i] == 'p') b += 'q';
		else if(a[i] == 'q') b += 'p';
		else b += 'w';
	}
	cout << b << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    