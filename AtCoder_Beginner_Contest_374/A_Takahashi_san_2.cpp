#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s;
     cin>>s;
     if(s.substr(s.length() - 3) == "san") cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
     return 0;
}