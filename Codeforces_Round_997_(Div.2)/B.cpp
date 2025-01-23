#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> deg;
    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n, -1);
    for(int i = n - 1; i >= 0; i--) {
        int k = 0;
        for(int j = 0; j < i; j++) {
            k += (a[j][i] == '1');
        }
        for(int j = 0; j < n; j++) {
            if(b[j] == -1) {
                if(k == 0) {
                    b[j] = i;
                    break;
                }
                k--;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] + 1 << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

