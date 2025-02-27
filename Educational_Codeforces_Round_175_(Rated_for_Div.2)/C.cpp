#include <bits/stdc++.h>
using namespace std;

bool check(int x, int n, const string& s, const vector<int>& a, int k) {
    vector<int> no;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R' && a[i] > x) {
            no.push_back(i);
        }
    }
    vector<int> req;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B' && a[i] > x) {
            req.push_back(i);
        }
    }
    if (req.empty()) {
        return true;
    }
    sort(no.begin(), no.end());
    vector<pair<int, int>> okay;
    int prev = -1;
    for (int pos : no) {
        if (prev + 1 <= pos - 1) {
            okay.emplace_back(prev + 1, pos - 1);
        }
        prev = pos;
    }
    if (prev + 1 <= n - 1) {
        okay.emplace_back(prev + 1, n - 1);
    }
    sort(req.begin(), req.end());
    int cnt = 0;
    for (auto [l, r] : okay) {
        auto it = lower_bound(req.begin(), req.end(), l);
        if (it != req.end() && *it <= r) {
            cnt++;
        }
    }
    return cnt <= k;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    int max_a = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }

    int low = 0, high = max_a;
    int ans = high;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (check(mid, n, s, a, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
