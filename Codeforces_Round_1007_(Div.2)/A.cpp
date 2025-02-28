#include <bits/stdc++.h>
using namespace std;

void solve() {
   int k; cin >> k;
   if(k % 3 == 1) cout << "Yes\n";
   else cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

