#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(){
     int n, h, ans = 0;
     cin>>n;
     map<int, int> fr;
     for(int i = 0; i < n; i++){
          cin>>h;
          fr[h]++;
          ans = max(ans, fr[h]);
     }
     cout<<n - ans<<endl;
     return;
}

int main(){
     int t;
     cin>>t;
     while(t--){
          solve();
     }
     return 0;
}