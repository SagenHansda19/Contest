#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    string s; cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(s < t) {
        cout << "Yes\n";
        return;
    }
    if(k == 0) {
        cout << "No\n";
        return;
    }
    bool is = true;
    for(char c : s) {
        if(c != s[0]) {
            is = false;
            break;
        }
    }
    cout << (is ? "No\n" : "Yes\n");
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

