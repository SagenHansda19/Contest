#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;
    
    vector<int> nums;
    for(auto x : a) {
        int cnt = 0;
        while(x % 2 == 0) {
            cnt++;
            x /= 2;
        }
        nums.push_back(cnt);
    }
    
    sort(nums.rbegin(), nums.rend());
    
    int points = 0;
    int curr = 0;
    for(int i = 0; i < n; i++) {
        if(curr == 0 && nums[i] > 0) {
            points++;
            curr = nums[i] - 1;
        } else if(curr > 0) {
            curr--;
        }
    }
    
    cout << points << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
