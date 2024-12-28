#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    string s, t;
    cin >> k >> s >> t;
    if (s == t) {
        cout << "Yes\n";
        return;
    }
    int n = s.size();
    int m = t.size();
    if (abs(n - m) > 1) {
        cout << "No\n";
        return;
    }
    int i = 0, j = 0;
    bool operationUsed = false;
    while (i < n && j < m) {
        if (s[i] != t[j]) {
            if (operationUsed) {
                cout << "No\n";
                return;
            }
            operationUsed = true;

            if (n == m) {
                i++;
                j++;
            }
            else if (n < m) {
                j++;
            } else {
                i++;
            }
        } else {
            i++;
            j++;
        }
    }
    if ((i < n || j < m) && !operationUsed) {
        cout << "Yes\n";
        return;
    }

    cout << (operationUsed ? "Yes\n" : "No\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
