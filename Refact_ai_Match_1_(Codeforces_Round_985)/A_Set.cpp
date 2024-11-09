#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(){
     int l, r, k, ans = 0;
     cin>>l>>r>>k;
     cout<<max(r / k - l + 1, 0)<<endl;
     return;
}

int main(){
     ios::sync_with_stdio(false);
     int t;
     cin>>t;
     while(t--){
          solve();
     }
     return 0;
}