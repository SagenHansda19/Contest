#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> a(n);
     for(int i = 0; i < n; i++) cin >> a[i];
     int rem = n - 2;
     unordered_map<int, int> freq;
     for(int i = 0; i < n; i++){
          if (rem % a[i] == 0) { 
               int complement = rem / a[i];
               if (freq.find(complement) != freq.end()) { 
                    cout << a[i] << " " << complement << endl;
                    return;
               }
          }
          freq[a[i]]++;
     }
     //TLE
     // for(int i = 0; i < n; i++){
     //      for(int j = i + 1; j < n; j++){
     //           if(i != j && a[i] * a[j] == rem){
     //                cout << a[i] << " " << a[j] << endl;
     //                return;
     //           }
     //      }
     // }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t; cin >> t;
     while(t--){
          solve();
     }
     return 0;
}