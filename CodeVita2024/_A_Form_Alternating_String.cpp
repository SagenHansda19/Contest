#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> val(n);
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    int rem_val = 0;
    char prev_char = '\0';
    int prev_val = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == prev_char) {
            if (val[i] > prev_val) {
                rem_val += prev_val;
                prev_char = s[i];
                prev_val = val[i];
            } else {
				rem_val += val[i];
            }
        } else {
            prev_char = s[i];
            prev_val = val[i];
        }
    }

    cout << rem_val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
