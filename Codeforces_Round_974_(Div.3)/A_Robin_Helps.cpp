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
          int n, k;
          cin>>n>>k;
          int val;
          int give = 0;
          int ans = 0;
          for(int i = 0; i < n; i++){
               cin>>val;
               if(val >= k){
                    give += val;
               }
               if(val == 0 && give > 0){
                    ans++;
                    give--;
               }
          }
          //only push
          cout<<ans<<endl;
     }    
}