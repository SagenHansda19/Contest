#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    for(string &i : a) cin >> i;
    sort(a.begin(), a.end(), [](const string &i, const string &j) {
            return i.length() < j.length();
    });
    string ans = "";
    for(string i : a) ans += i;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

