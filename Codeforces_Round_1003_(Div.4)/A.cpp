#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    s.pop_back();
    s.pop_back();
    s.push_back('i');
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

