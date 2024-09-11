#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a1, a2, b1, b2, c1, c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    int score = max(a1,a2) + max(b1,b2) + max(c1,c2);
    cout<<score<<endl;
    return 0;
}
