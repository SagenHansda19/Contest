#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int minElement(vector<int>& nums) {
          int ans = INT_MAX;
          for(int i = 0; i < nums.size(); i++){
               int sum = 0;
               while(nums[i] > 0){
                    sum += nums[i] % 10;
                    nums[i] /= 10;
               }
               ans = min(ans, sum);
          }
          return ans;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin>>val){
          if(cin.get() == '\n') break;
          nums.push_back(val);
     }
     cout<< sol.minElement(nums)<<endl;
     return 0;
}