#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<ll> fighters(n);
          for(int i = 0; i < n; i++){
               cin>>fighters[i];
          }
          ll sum = 0;
          for(int i = 0; i < n - 2; i++){
               sum += fighters[i];
          }
          ll ans = sum - fighters[n-2] + fighters[n-1];
          cout<< ans << endl;
     }
     return 0;
}