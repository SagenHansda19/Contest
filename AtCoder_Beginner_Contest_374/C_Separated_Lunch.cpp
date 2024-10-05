#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int close(vector<int>& a){
     int tot_sum = accumulate(a.begin(), a.end(), 0);
     int target = tot_sum / 2;
     set<int> possible_sums;
     possible_sums.insert(0);
     for(int num : a){
          set<int> new_sums(possible_sums);
          for(int s : possible_sums){
               new_sums.insert(s + num);
          }
          possible_sums = new_sums;
     }
     int best_sum = 0;
     for(int s : possible_sums){
          if(s <= target) best_sum = s;
     }
     return max(best_sum, tot_sum - best_sum);
}

int main(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i = 0; i < n; i++){
          cin>>a[i];
     }
     cout<<close(a)<<endl;
}