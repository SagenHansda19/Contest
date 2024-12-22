#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n - 2; i++) {
            if((nums[i] + nums[i + 2]) * 2 == nums[i + 1]) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while(cin >> val) {
        s.push_back(val);
        if(cin.get() == '\n') break;
    }  
    cout << sol.countSubarrays(a);
    return 0;
}
    