#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int start = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            start = max(0, i - nums[i]);
            for(int j = start; j <= i; j++) {
                ans += nums[j];
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums;
    int val;
    while(cin >> val) {
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.subarraySum(nums) << '\n';
    return 0;
}

