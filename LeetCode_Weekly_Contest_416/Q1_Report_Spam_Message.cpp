#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
          unordered_set<string> bannedSet(bannedWords.begin(), bannedWords.end()); 
          int count = 0;
          for(const string& word : message){
               if(bannedSet.find(word) != bannedSet.end()){
                    count++;
                    if(count >= 2){
                         return true;
                    }
               }
          }
          return false;
     }
};

int main(){
     Solution sol;
     vector<string> message = {"hello","world","leetcode"};
     vector<string> bannedWords = {"world","good"};
     cout << boolalpha << sol.reportSpam(message, bannedWords) << endl;
     return 0;
}