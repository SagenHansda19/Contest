#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t-->0){
          int d, x, y;
          cin>>d>>x>>y;
          if(y >= x){
               cout<<0<<endl;
               continue;
          }
          int trial = 0;
          bool possible = false;
          while(true){
               int rem_budget = y - trial;
               if(rem_budget < 0){
                    break;
               }
               int discount = 100 - d * trial;
               int dis_price = (x * discount + 99) / 100;
               if(rem_budget >= dis_price){
                    possible = true;
                    break;
               }
               trial++;
               if(discount < 0){
                    break;
               }
          }
          if(possible){
               cout<<trial<<endl;
          }
          else{
               cout<<-1<<endl;
          }
     }
     return 0 ;
}
