#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s, t;
     cin>>s>>t;
     int ans = 0;
     int sn = s.length(), tn = t.length();
     int itr = min(sn, tn);
     if(sn == tn){
          for(int i = 0; i < s.length(); i++){
               if(s[i] == t[i]) continue;
               else if(s[i] != t[i]){
                    ans = i + 1;
                    break;
               }
          }
     }
     else{
          for(int i = 0; i < itr; i++){
               if(s[i] == t[i]) {
                    ans = itr + 1;
                    continue;
               }
               else if(s[i] != t[i]){
                    ans = i + 1;
                    break;
               }
          }
     }
     cout<<ans<<endl;
     return 0;

}