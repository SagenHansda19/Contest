#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.length();
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == 'A' && s[i - 1] == 'W') s[i - 1] = 'A', s[i] = 'C';
    }
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

