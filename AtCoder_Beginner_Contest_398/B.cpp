#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(7);
    for(int &i : a) cin >> i;
    map<int, int> f;
    for(int i : a) f[i]++;
    bool is = false;
    for(auto [x, cnt_x] : f) {
        if(cnt_x >= 3) {
            for(auto [y, cnt_y] : f) {
                if(y != x && cnt_y >= 2) {
                    is = true;
                    break;
                }
            }
            if(is) break;
        }
    }
    cout << (is ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

