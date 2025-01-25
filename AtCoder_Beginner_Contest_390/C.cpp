#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    cin >> r >> c;
    vector<string> grid(r);
    
    for (int i = 0; i < r; i++) {
        cin >> grid[i];
    }
    
    int top = r, bottom = -1, left = c, right = -1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '#') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            if (grid[i][j] == '.') {
                cout << "No\n";
                return;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((i < top || i > bottom || j < left || j > right) && grid[i][j] == '#') {
                cout << "No\n";
                return;
            }
        }
    }

    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

