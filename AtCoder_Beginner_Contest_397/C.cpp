#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    map<int, int> ls, rs;
    ls[a[0]]++;;
    for(int i = 1; i < n; i++) {
        rs[a[i]]++;
    }
    int ans = ls.size() + rs.size();
    for(int i = 1; i < n; i++) {
        ls[a[i]]++;
        rs[a[i]]--;
        if(rs[a[i]] == 0) rs.erase(a[i]);
        int ss = ls.size() + rs.size();
        ans = max(ans, ss);
    }
    cout << ans << '\n';
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

