#include <bits/stdc++.h>
using namespace std;

long long remove33(long long x) {
    string s = to_string(x);
    for(long long i = 1; i < s.length(); i++) {
        if(s[i] == '3' && s[i - 1] == '3') s.erase(i - 1, 2);
    }
    return stoll(s);
}

void solve() {
	long long x; cin >> x;
	while (x > 0) {
        if (x == 33) {
            x -= 33;
        } else {
            long long newX = remove33(x);
            if (newX == x) {
                if (x >= 33) {
                    x -= 33;
                } else {
                    cout << "NO" << '\n';
                    return;
                }
            } else {
                x = newX;
            }
        }
    }
    cout << "YES" << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    