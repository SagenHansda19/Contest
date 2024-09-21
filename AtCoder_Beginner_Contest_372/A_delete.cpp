#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s;
     cin>>s;
     s.erase(remove(s.begin(), s.end(), '.'), s.end());
     cout<<s<<endl;
     return 0;    
}