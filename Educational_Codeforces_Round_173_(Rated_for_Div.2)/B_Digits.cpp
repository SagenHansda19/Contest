#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> ans;
    
    // Always divisible by 1
    ans.push_back(1);
    
    // For 3: sum of n! digits should be divisible by 3
    long long sum_3 = (1LL * d * n!) % 3;
    if(sum_3 == 0) ans.push_back(3);
    
    // For 5: only when d is 5
    if(d == 5) ans.push_back(5);
    
    // For 7: repdigit pattern repeats every 6 digits
    // If n! ≥ 7, always divisible
    if(n >= 7 || d % 7 == 0) ans.push_back(7);
    
    // For 9: sum of n! digits should be divisible by 9
    long long sum_9 = (1LL * d * n!) % 9;
    if(sum_9 == 0) ans.push_back(9);
    
    for(int x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}