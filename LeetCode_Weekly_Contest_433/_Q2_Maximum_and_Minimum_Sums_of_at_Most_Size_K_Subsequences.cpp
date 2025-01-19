#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMaxSums(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long result = 0;
        
        vector<vector<long long>> C(n + 1, vector<long long>(k + 1, 0));
        for (int i = 0; i <= n; ++i) {
            C[i][0] = 1;
            for (int j = 1; j <= min(i, k); ++j) {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int len = 1; len <= k; ++len) {
                if (i + 1 >= len) {
                    result = (result + nums[i] * C[i][len - 1]) % MOD;
                }
                if (n - i >= len) {
                    result = (result + nums[i] * C[n - i - 1][len - 1]) % MOD;
                }
            }
        }
        
        return result;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums;
    int k, val;
    while(cin >> val) {
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.minMaxSums(nums, k) << '\n';
    return 0;
}

