#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int countOfSubstrings(string word, int k) {
          int ans = 0;
          int n = word.length();
          unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
          for(int i = 0; i < n; i++){
               unordered_set<char> vowelSet;
               int consonantCount = 0;
               for(int j = i; j < n; j++){
                    char ch = word[j];
                    if (vowels.count(ch)) {
                         vowelSet.insert(ch);
                    } else {
                         consonantCount++;
                    }
                    if (vowelSet.size() == 5 && consonantCount == k) {
                         ans++;
                    }
                    if (consonantCount > k) {
                         break;
                    }
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string word;
     int k;
     cin>>word>>k;
     cout<<sol.countOfSubstrings(word, k);
     return 0;   
}