#include <bits/stdc++.h>
using namespace std;

const int mm = 1e6 + 10;

vector<vector<int>> divisors(mm);

void precompute_divisors() {
    for (int i = 1; i < mm; ++i) {
        for (int j = i; j < mm; j += i) {
            divisors[j].push_back(i);
        }
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    vector<int> f(mm, 0);
    for (int i : a) {
        f[i]++;
    }
    vector<int> cnt(mm, 0);
    for (int i = 1; i < mm; ++i) {
        for (int j = i; j < mm; j += i) {
            cnt[i] += f[j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int num = a[i];
        int max_gcd = 1;
        for (int d : divisors[num]) {
            if (cnt[d] >= k) {
                max_gcd = max(max_gcd, d);
            }
        }
        cout << max_gcd << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute_divisors();
    solve();
    return 0;
}
