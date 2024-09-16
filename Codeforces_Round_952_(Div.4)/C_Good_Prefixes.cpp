#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<int> a(n);
          for(int i = 0; i < n; i++){
               cin>>a[i];
          }
          int ans = 0;
          sort(a.begin(), a.end());
          for(int i = 0; i < n; i++){
               for(int j = 0; j <= i; j++){
                    if(j == 0 && a[j] == 0){
                         ans++;
                    }
                    else if(j >= 2){
                         int l = 0;
                         int r = j-1;
                         while(l < r){
                              
                    }
               }
          }
     }    
}