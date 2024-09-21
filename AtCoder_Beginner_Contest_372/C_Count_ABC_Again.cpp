#include <bits/stdc++.h>
using namespace std;

int main() {
     int n, q;
     cin >> n >> q;
     string s;
     cin >> s;

     int count = 0;
     for (int i = 0; i < n - 2; i++) {
          if (s.substr(i, 3) == "ABC") {
               count++;
          }
     }

     while (q--) {
          int x;
          char c;
          cin >> x >> c;
          x--;
          for (int i = max(0, x - 2); i <= min(n - 3, x); i++) {
               if (s.substr(i, 3) == "ABC") {
                    count--;
               }
          }

          s[x] = c;
          for (int i = max(0, x - 2); i <= min(n - 3, x); i++) {
               if (s.substr(i, 3) == "ABC") {
                    count++;
               }
          }

          cout << count << endl;
     }

     return 0;
}
