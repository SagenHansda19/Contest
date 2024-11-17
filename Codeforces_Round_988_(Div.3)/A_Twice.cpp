#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> a(n);
     for(int i = 0; i < n; i++){
          cin >> a[i];
     }
     map<int, int> fr;
     int ans = 0;
     for(int i = 0; i < n; i++){
          for(int j = i + 1; j < n; j++){
               if(a[i] == a[j] && fr[i] == 0 && fr[j] == 0){
                    fr[i]++;
                    fr[j]++;
                    ans++;
               }
          }
     }
     cout << ans << endl;
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