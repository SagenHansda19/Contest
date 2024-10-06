#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string givebinary(int num){
          if(num == 0) return "0";
          int n = (int)(log2(num));
          return bitset<64>(num).to_string().substr(64 - n - 1);
     }
     int givedecimal(string binary){
          int decimal = 0;
          for(size_t i = 0; i < binary.length(); i++) decimal = decimal * 2 + (binary[i] - '0');
          return decimal;
     }
     int maxGoodNumber(vector<int>& nums) {
          string first = givebinary(nums[0]);
          string second = givebinary(nums[1]);
          string third = givebinary(nums[2]);
          int p1 = givedecimal(first + second + third);
          int p2 = givedecimal(first + third + second);
          int p3 = givedecimal(second + first + third);
          int p4 = givedecimal(second + third + first);
          int p5 = givedecimal(third + second + first);
          int p6 = givedecimal(third + first + second);
          return max({p1, p2, p3, p4, p5, p6});
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
     cout<<sol.maxGoodNumber(nums);
     return 0;
}