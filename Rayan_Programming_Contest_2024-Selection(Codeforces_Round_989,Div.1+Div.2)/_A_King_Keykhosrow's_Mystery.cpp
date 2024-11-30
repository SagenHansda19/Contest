#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	if(b == 0) return a;
	return gcd(a, a % b);
}

long long lcm(int a, int b) {
	return(a / gcd(a, b)) * b;
}

void solve() {
	int a, b; cin >> a >> b;
	cout << lcm(a, b) << endl;
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
    