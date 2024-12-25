#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> ans;
    ans.push_back(1);
    if((d % 3 == 0) || (n >= 3)) ans.push_back(3);
    if(d == 5) ans.push_back(5);
    if(d == 7 || n >= 3) ans.push_back(7);
    if(d % 9 == 0) ans.push_back(9);
    else if(d % 3 == 0) {
    	if(n >= 3) ans.push_back(9);
    }
    else {
    	if(n >= 6) ans.push_back(9);
    }
    for(int i : ans) {
    	cout << i << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}