#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    if(a == "sick" && b == "fine") {
        cout << "2\n";
    }
    else if(a == "fine" && b == "sick") {
        cout << "3\n";
    }
    else if (a == "fine" && b == "fine") {
        cout << "4\n";
    }
    else cout << "1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

