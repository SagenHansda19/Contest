#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
     int prod(int n){
          int prodv = 1;
          while(n > 0){
               int digit = n % 10;
               if(digit == 0) return 0;
               prodv *= digit;
               n /= 10;
          }
          return prodv;
     }
public:
     int smallestNumber(int n, int t) {
          while(prod(n) % t != 0) n++;
          return n;
     }
};

int main(){
     Solution sol;
     int n, t;
     cin>>n>>t;
     cout<<sol.smallestNumber(n, t);
     return 0;   
}