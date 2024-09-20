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
          int n, x, y;
          cin>>n>>x>>y;
          int time = 0;
          if(x >= y){
               if(n % y == 0){
                    time = n / y;
               }
               else{
                    time = n / y + 1;
               }
          }
          else if(x < y){
               if(n % x == 0){
                    time = n / x;
               }
               else{
                    time = n / x + 1;
               }
          }
          cout<<time<<endl;
     }    
     return 0;
}