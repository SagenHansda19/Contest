#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     long long maxScore(vector<int>& a, vector<int>& b) {
          long long maxval = LLONG_MIN;
          int n = b.size();
          long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN, max4 = LLONG_MIN;
          for (int i = 0; i < n; i++) {
               if (i >= 3) {
                    max4 = max(max4, max3 + 1LL * a[3] * b[i]);
               }
               if (i >= 2) {
                    max3 = max(max3, max2 + 1LL * a[2] * b[i]);
               }
               if (i >= 1) {
                    max2 = max(max2, max1 + 1LL * a[1] * b[i]);
               }
               if (i >= 0) {
                    max1 = max(max1, 1LL * a[0] * b[i]);
               }
          }
          return max4;
     }
};

int main(){
     Solution sol;
     vector<int> a, b;
     int val;
     while(cin>>val){
          a.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     while(cin>>val){
          b.push_back(val);
          if(cin.get()== '\n'){
               break;
          }
     }
     cout<<sol.maxScore(a, b);
     return 0;
}