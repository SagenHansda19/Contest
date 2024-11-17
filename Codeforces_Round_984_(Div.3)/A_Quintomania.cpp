#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin >> n;
     vector<int> melody(n);
     for(int i = 0; i < n; i++){
          cin >> melody[i];
     }
     bool ans = true;
     for(int i = 1; i < n; i++){
          if(abs(melody[i] - melody[i - 1]) != 5 && abs(melody[i] - melody[i - 1]) != 7){
               ans = false;
          }
     }
     cout << (ans ? "YES" : "NO") << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin >> t;
     while(t--){
          solve();
     }
     return 0;
}