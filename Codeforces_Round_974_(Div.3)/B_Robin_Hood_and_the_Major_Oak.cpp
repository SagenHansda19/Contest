#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
long long odd_count_(long long x){
     return (x + 1) / 2;

}
int main(){
     int t;
     cin>>t;
     while(t--){
          long long n, k;
          cin>>n>>k;
          long long l = n - k + 1;
          long long r = n;
          long long odd_count = odd_count_(r) - odd_count_(l - 1);
          if(odd_count % 2 == 0){
               cout<<"YES"<<endl;
          }
          else{
               cout<<"NO"<<endl;
          }
     }    
}