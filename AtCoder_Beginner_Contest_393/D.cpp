#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> ones;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }
    int k = ones.size();
    int m = k / 2;
    long long ans = 0;
    for (int i = 0; i < k; ++i) {
        int target = ones[m] - (m - i);
        ans += abs(ones[i] - target);
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

