#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, r, c;
    cin >> n >> r >> c;
    string s; cin >> s;
    int cr = 0, cc = 0;
    set<pair<int,int>> st;
    st.insert({0, 0});
    string ans;
    ans.resize(n);
    for (int i = 0; i < n; i++){
        char d = s[i];
        if (d == 'N') cr--;
        else if (d == 'S') cr++;
        else if (d == 'W') cc--;
        else if (d == 'E') cc++;
        pair<int,int> need = {cr - r, cc - c};
        ans[i] = (st.count(need) ? '1' : '0');
        st.insert({cr, cc});
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

