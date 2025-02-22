#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int k = 0;
    for(char c : s) {
        if(c == '2') k++;
    }
    string ans = "";
    for(int i = 0; i < k; i++) ans += '2';
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

