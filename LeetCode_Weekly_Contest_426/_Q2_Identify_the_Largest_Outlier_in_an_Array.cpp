#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;
        int largestOutlier = INT_MIN;
        for (int x : nums) {
            int potentialOutlier = totalSum - 2 * x;
            if (freq[potentialOutlier] > 0 && (potentialOutlier != x || freq[x] > 1)) {
                largestOutlier = max(largestOutlier, potentialOutlier);
            }
        }
        return largestOutlier;
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
	cout << sol.getLargestOutlier(nums) << endl;
    return 0;
}
    