#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int special_idx = -1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] != 1 && a[i] != -1) {
            special_idx = i;
        }
    }
    set<int> sums;
    sums.insert(0); 
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            sums.insert(sum);
        }
    }
    cout << sums.size() << '\n';
    for(int sum : sums) {
        cout << sum << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    