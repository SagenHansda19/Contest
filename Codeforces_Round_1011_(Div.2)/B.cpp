#include <bits/stdc++.h>
using namespace std;

int getMex(vector<int> &a) {
    int n = a.size();
    vector<bool> b(n + 1, false);
    for (int i : a)
        if(i <= n) b[i] = true;
    int m = 0;
    while(b[m]) m++;
    return m;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(!count(a.begin(), a.end(), 0)) {
        cout << "1\n";
        cout << "1 " << n << '\n';
    } else if(a[0]) {
        cout << "2\n";
        cout << "2 " << n << '\n';
        cout << "1 2\n";
    } else if(a.back()) {
        cout << "2\n";
        cout << "1 " << n - 1 << '\n';
        cout << "1 2\n";
    } else {
        cout << "3\n";
        cout << "1 2\n";
        cout << "2 " << n - 1 << '\n';
        cout << "1 2\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

