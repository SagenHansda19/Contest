#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int &i : nums) cin >> i;
    
    unordered_map<int, int> freq;
    for(int i : nums) {
        freq[i]++;
    }
    
    int score = 0;
    unordered_set<int> used;
    
    for(int i = 1; i <= n; i++) {
        if(freq[i] > 0 && freq[k - i] > 0 && used.find(i) == used.end() && used.find(k - i) == used.end()) {
            if(i == k - i) {
                score += freq[i] / 2;
                used.insert(i);
            } else {
                int pairs = min(freq[i], freq[k - i]);
                score += pairs;
                used.insert(i);
                used.insert(k - i);
            }
        }
    }
    
    cout << score << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
