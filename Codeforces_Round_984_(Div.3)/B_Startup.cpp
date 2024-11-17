#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, k;
     cin >> n >> k;
     vector<int> cost(k, 0);
     for(int i = 0; i < k; i++){
          int b, c;
          cin >> b >> c;
          cost[b - 1] += c;
     } 
     sort(cost.begin(), cost.end(), greater<int>());
     int ans = 0;
     for(int i = 0; i < min(k, n); i++){
          ans += cost[i];
     }
     cout << ans << endl;
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