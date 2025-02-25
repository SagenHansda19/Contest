#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a;
    int s = 0, m = 0;
    while (m < n) {
        int next = s | m;
        if (next > x) break;
        s = next;
        a.push_back(m);
        m++;
    }
    if (s < x) {
        int required = x ^ s;
        if (m < n) {
            a.push_back(required);
            m++;
        } else {
            if (!a.empty()) {
                a.back() |= required;
            } else {
                a.push_back(x);
            }
        }
    }
    while (m < n) {
        a.push_back(0);
        m++;
    }

    for (int num : a) {
        cout << num << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

