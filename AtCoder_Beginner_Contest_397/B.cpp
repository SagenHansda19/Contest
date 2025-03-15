#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int ans = -1, n = s.length();
    for (int l = (n % 2 == 0 ? n : n + 1); l <= 300; l += 2) {
        int j = 0;
        for (int i = 0; i < l && j < n; i++) {
            char expected = (i % 2 == 0) ? 'i' : 'o';
            if (s[j] == expected) j++;
        }
        if (j == n) {
            ans = l - n;
            break;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();    
    return 0;
}

