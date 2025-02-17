#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if(n == 0){
        cout << "0\n";
        return;
    }
    vector<char> g;
    char c = s[0];
    g.push_back(c);
    for(int i = 1; i < n; i++) {
        if(s[i] != c) g.push_back(c=s[i]);
    }
    int a = 0, b = 0;
    for(int i = 0; i < g.size(); i++) {
        if(g[i] == '1') {
            a++;
            if(i+1 < g.size() && g[i+1] == '0') b++;
        }
    }
    cout<< a + b <<"\n"; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

