#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          string a, b;
          cin>>a>>b;
          char temp = b[0];
          b[0] = a[0];
          a[0] = temp;
          cout<<a<<" "<<b<<endl;
     }   
}