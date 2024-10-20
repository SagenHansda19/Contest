#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<string> stringSequence(string target) {
          vector<string> result;
          string screen = "";
          for (char ch : target) {
               screen += 'a';
               result.push_back(screen);
               while (screen.back() != ch) {
                    screen.back()++;
                    result.push_back(screen);
               }
          }
          return result;
     }
};

int main(){
     Solution sol;
     string target;
     cin>>target;
     vector<string> ans = sol.stringSequence(target);
     for(auto a : ans) cout<<a<<" ";
     cout<<endl;
     return 0;
}