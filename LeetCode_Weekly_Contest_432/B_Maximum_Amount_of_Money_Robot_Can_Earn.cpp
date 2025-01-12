#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int n = coins.size(); 
        int m = coins[0].size(); 
        
        // 3D DP array initialized to INT_MIN to represent unvisited states
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(3, INT_MIN)));
        
        // Iterate over the number of neutralizations (0, 1, 2)
        for (int count = 0; count < 3; ++count) {
            // Traverse the grid from bottom-right to top-left
            for (int i = n - 1; i >= 0; --i) {
                for (int j = m - 1; j >= 0; --j) {
                    // Base case: Bottom-right corner
                    if (i == n - 1 && j == m - 1) {
                        dp[i][j][count] = count > 0 ? max(0, coins[i][j]) : coins[i][j];
                        continue;
                    }
                    
                    int ans = INT_MIN; 
                    
                    // Check the cell below (down movement)
                    if (i + 1 < n) {
                        ans = max(ans, coins[i][j] + dp[i + 1][j][count]); // No neutralization
                        if (count > 0) ans = max(ans, dp[i + 1][j][count - 1]); // With neutralization
                    }
                    
                    // Check the cell to the right (right movement)
                    if (j + 1 < m) {
                        ans = max(ans, coins[i][j] + dp[i][j + 1][count]); // No neutralization
                        if (count > 0) ans = max(ans, dp[i][j + 1][count - 1]); // With neutralization
                    }
                    
                    // Update dp array for the current cell
                    dp[i][j][count] = ans;
                }
            }
        }
        
        // The answer is stored at the starting cell with 2 neutralizations available
        return dp[0][0][2];
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
    cout << sol.maximumAmount(grid);
    cout << '\n';
    return 0;
}

