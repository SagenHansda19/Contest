#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> stones(n);
    for(auto &x : stones) cin >> x;
    
    vector<bool> isAdult(n, false);
    for(int year = 1; year <= n; year++) {
        int newAdult = year - 1;  
        
        
        long long givingAdults = 0;
        for(int i = 0; i < n; i++) {
            if(isAdult[i] && stones[i] > 0) {
                givingAdults++;
            }
        }
        

        for(int i = 0; i < n; i++) {
            if(isAdult[i] && stones[i] > 0) {
                stones[i]--;
            }
        }
        
        stones[newAdult] += givingAdults;
        
        isAdult[newAdult] = true;
    }
    
    for(int i = 0; i < n; i++) {
        cout << stones[i] << (i < n-1 ? " " : "\n");
    } 
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

