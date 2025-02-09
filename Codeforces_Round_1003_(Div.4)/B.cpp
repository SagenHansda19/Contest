#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    bool ans = false;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == s[i - 1]) {
            ans = true;
            break;
        }
    }
    cout << ((ans == true) ? 1 : s.length());
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

