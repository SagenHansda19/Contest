#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     char kthCharacter(int k) {
          string word = "a";
          while(word.size() <= k){
               string temp = word;
               for(int i = 0; i < temp.size(); i++){
                    temp[i] = temp[i]+1;
                    word += temp[i];
               }
          }
          return word[k - 1];
     }
};

int main(){
     Solution sol;
     cout<<sol.kthCharacter(5);
     return 0;
}