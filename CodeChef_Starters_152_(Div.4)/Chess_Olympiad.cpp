#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int X, Y, Z;
    cin>> X >> Y >> Z;
    if(X + Y + Z == 4){
        if(X > Z){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if(X + Y + Z == 3){
        if(X >= Z){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if(X + Y + Z == 2){
        if(X >= Z){
            cout<<"Yes"<<endl;
        }
        else if(Z >= X + 1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
