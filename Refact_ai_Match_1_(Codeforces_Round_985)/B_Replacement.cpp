#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
     int n;
     string s, r;
     cin>>n>>s>>r;
     int cnt0 = count(s.begin(), s.end(), '0'), cnt1 = n - cnt0;
     for(int i = 0; i < n - 1; i++){
          if(cnt0 == 0 || cnt1 == 0){
               cout<<"NO"<<endl;
               return;
          }
          if(r[i] == '1') cnt0--;
          else cnt1--;
     }
     cout<<"YES"<<endl;
}

int main(){
     int t;
     cin>>t;
     while(t--){
          solve();
     }
     return 0;
}