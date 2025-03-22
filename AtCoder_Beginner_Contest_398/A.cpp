#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s = "";
    if(n % 2 == 0) {
        for(int i = 0; i < n / 2 - 1; i++) {
            s += '-';
        }
        s += '=';
        string t = s;
        reverse(t.begin(), t.end());
        s += t;
        cout << s << '\n';
    } else {
        for(int i = 0; i < n / 2; i++) {
            s += '-';
        }
        string t = s;
        s += '=';
        s += t;
        cout << s << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

