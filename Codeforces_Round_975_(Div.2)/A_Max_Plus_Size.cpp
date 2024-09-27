#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int MaxScore(vector<int>& a, int n){
     int max_even = 0, count_even = 0;
     int max_odd = 0, count_odd = 0;
     for(int i = 0; i < n; i += 2){
          max_even = max(max_even, a[i]);
          count_even++;
     }
     for(int i = 1; i < n; i += 2){
          max_odd = max(max_odd, a[i]);
          count_odd++;
     }

     int score_even = max_even + count_even;
     int score_odd = max_odd + count_odd;

     return max(score_even, score_odd);
}

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<int> a(n);
          for(int i = 0; i < n; i++) cin>>a[i];
          cout<<MaxScore(a, n)<<endl;
     }    
     return 0;
}