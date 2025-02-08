#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin >> n;
   vector<int> p(n + 1), q(n + 1), pos(n + 1);
   for(int i = 1; i <= n; i++) cin >> p[i];
   for(int i = 1; i <= n; i++) {
       cin >> q[i];
       pos[q[i]] = i;
   }
   for(int i = 1; i <= n; i++) {
       cout << q[p[pos[i]]] << (i == n ? '\n' : ' ');
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

