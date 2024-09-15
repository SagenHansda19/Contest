#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> getSneakyNumbers(vector<int>& nums) {
          vector<int> ans;
          sort(nums.begin(), nums.end());
          for(int i = 0; i < nums.size() - 1; i++){
               if(nums[i] == nums[i+1]){
                    ans.push_back(nums[i]);
                    continue;
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     vector<int> res = sol.getSneakyNumbers(nums);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
     return 0;
}