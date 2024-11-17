#include <bits/stdc++.h>
using namespace std;

// bool isComposite(int n)
// {
//      if (n <= 1)  return false;
//      if (n <= 3)  return false;
//      if (n%2 == 0 || n%3 == 0) return true;    
//      for (int i=5; i*i<=n; i=i+6)
//           if (n%i == 0 || n%(i+2) == 0)
//                return true;
//      return false;
// }

bool isPrime(int n)
{
     if (n == 1)
          return false; 
     for (int i = 2; i <= sqrt(n); i++) 
     {
          if (n % i == 0)
               return false;
     }
     return true;
}

void solve(){
     int n;
     cin >> n;
     if (n < 5) {
          cout << -1 << endl;
          return;
     }
     vector<int> a;
     for (int i = 1; i <= n; i++) {
          if (i % 2 == 1 && i != 5) {
               a.push_back(i);
          }
     }
     a.push_back(5);
     a.push_back(4);
     for (int i = 1; i <= n; i++) {
          if (i % 2 == 0 && i != 4) {
               a.push_back(i);
          }
     }
     for (int i = 0; i < n; i++) {
          cout << a[i] << " " ;
     }
     cout << endl;
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