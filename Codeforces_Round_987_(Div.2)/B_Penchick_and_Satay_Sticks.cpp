#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(auto &x : a) cin >> x;
     for(int i = 0; i < n - 1; i++){
          if(a[i] != i + 1){
               if(a[i + 1] == i + 1 && a[i] == i + 2) swap(a[i], a[i + 1]);
               else{
                    cout << "NO" << endl;
                    return;
               }
          }
     }
     cout<<"YES"<<endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin >> t;
     while(t--) solve();
     return 0;
}