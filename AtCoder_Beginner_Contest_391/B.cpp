#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(n, '.'));
    vector<vector<char>> t(m, vector<char>(m, '.'));
    for(auto i : s) {
        for(char j : i) cin >> j;
    }
    for (auto i : t) {
        for(char j : i) cin >> j;
    }
    for(int i = 0; i < n - m + 1; i++) {
        for(int j = 0; j < n - m + 1; j++) {
            for(int r = 0; r < m; r++) {
                for(int c = 0; c < m; c++) {
                    
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

