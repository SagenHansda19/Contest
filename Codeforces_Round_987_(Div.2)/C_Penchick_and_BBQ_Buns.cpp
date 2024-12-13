#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
 
    if (n%2 == 0)
    {
        for (int i = 1; i<=n/2; i++) cout<<i<<' '<<i<<' ';
        cout<<endl;
        return;
    }
    if (n<=25) {
        cout<<-1<<endl; 
        return;
    }
    vector<int> ans(n);
    ans[0] = 1;
    ans[9] = 1;
    ans[25] = 1;
    ans[26] = 2;
    ans[22] = 2;
 
    int cur = 3;
    int pos = 1;
    while (pos<n)
    {
        if (ans[pos] != 0) pos++;
        else {
            ans[pos] = cur; 
            ans[pos+1] = cur; 
            cur++; 
            pos+=2;
        }
    }
 
    for(int a : ans) {
        cout << a << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    