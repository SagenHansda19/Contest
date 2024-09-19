#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int minRange = INT_MAX;
        minRange = min(minRange, a[n-1] - a[2]);
        minRange = min(minRange, a[n-3] - a[0]); 
        minRange = min(minRange, a[n-2] - a[1]);
        minRange = min(minRange, a[n-2] - a[0]); 
        
        cout << minRange << endl;
    }
    return 0;
}
