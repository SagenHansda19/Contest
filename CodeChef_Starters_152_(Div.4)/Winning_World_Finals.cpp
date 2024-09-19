#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m, p;
        cin>>m>>p;
        int wrong = 0;
        while(m < 299 && (p + 20 + m + 1) <= 1000){
            p += 20;
            wrong++;
            m++;
        }
        
        cout<<wrong<<endl;
    }
    return 0;
}
