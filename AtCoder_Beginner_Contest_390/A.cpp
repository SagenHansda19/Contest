#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(5);
    for (int &i : a) cin >> i;
    vector<int> sa = a;
    sort(sa.begin(), sa.end());
    if (a == sa) {
        cout << "No\n";
        return;
    }
    for (int i = 0; i < 4; i++) {
        swap(a[i], a[i + 1]);
        if (a == sa) {
            cout << "Yes\n";
            return;
        }
        swap(a[i], a[i + 1]);
    }    
    cout << "No\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

