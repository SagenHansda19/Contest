#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        pair<int, int> vst = {0, 0};
        vector<int> ans;
        ans.push_back(grid[0][0]);
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                for(int j = 0; j < m; j++) {
                    int x = vst.first, y = vst.second; 
                    if(abs(x - i) + abs(y - j) == 2) {
                        ans.push_back(grid[i][j]);
                        vst = {i, j};
                    }
                }
            }
            else {
                for(int j = m - 1; j >= 0; j--) {
                    int x = vst.first, y = vst.second;
                    if(abs(x - i) + abs(y - j) == 2) {
                        ans.push_back(grid[i][j]);
                        vst = {i, j};
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> grid;
    vector<int> row;
    int val;
    while (true) {
        cin >> val;
        row.push_back(val);
        if (cin.get() == '\n') {
            break;
        }
    }
    int n = row.size();
    grid.push_back(row);
    for (int i = 1; i < n; ++i) {
        vector<int> newRow;
        for (int j = 0; j < n; ++j) {
            cin >> val;
            newRow.push_back(val);
        }
        grid.push_back(newRow);
    }
    vector<int> ans = sol.zigzagTraversal(grid);
    for(int &i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}

