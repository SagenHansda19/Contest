#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, a, b;
     cin >> n >> a >> b;
     string s;
     cin >> s;
     int x = 0, y = 0;
     for(int i = 0; i < n * 10; i++){
          for(auto c : s){
               if(c == 'N') y++;
               else if(c == 'E') x++;
               else if(c == 'S') y--;
               else x--;
               if(x == a && y == b){
                    cout << "YES" << endl;
                    return;
               }
          }
     }
     cout << "NO" << endl;
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