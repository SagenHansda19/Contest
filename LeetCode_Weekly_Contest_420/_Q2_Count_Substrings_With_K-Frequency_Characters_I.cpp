#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int numberOfSubstrings(string s, int k) {
          int n = s.length(), ans = 0;
          int l = 0, r = l + r - 1;
          for (int i = 0; i < n; i++) {
               unordered_map<char, int> freq;
               for (int j = i; j < n; j++) {
                    freq[s[j]]++; 
                    for (auto& entry : freq) {
                         if (entry.second >= k) {
                         ans++; 
                         break;
                         }
                    }
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s;
     int k;
     cin>>s>>k;
     cout<<sol.numberOfSubstrings(s, k);
     return 0;   
}