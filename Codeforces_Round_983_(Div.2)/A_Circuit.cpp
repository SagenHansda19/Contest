#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> s(2);
     for(int i = 0; i < 2 * n; i++){
          int x; cin >> x;
          if(x == 0) s[0]++;
          else s[1]++;
     }
     int maxi = min(s[0], s[1]);
     int mini = s[0] % 2;
     cout << mini << " " << maxi << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;  cin >> t;
     while(t--){
          solve();
     }
     return 0;
}