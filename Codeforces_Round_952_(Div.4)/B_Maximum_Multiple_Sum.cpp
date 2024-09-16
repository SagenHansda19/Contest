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
          // int x = 2;
          int ans;
          int maxs = INT_MIN;
          for(int i = 2; i <= n; i++){
               int k = 1;
               int sm = 0;
               while(k*i <= n){
                    sm += k * i;
                    k++;
               }
               if(sm > maxs){
                    maxs = sm;
                    ans = i;
               }
               // maxs = max(maxs, sm);
          }
          cout<<ans<<endl;
     }    
     return 0;
}