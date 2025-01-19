#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    const int MOD = 1e9 + 7;
    int m, n, target;
    vector<vector<vector<int>>> memo;
    int dfs(vector<vector<int>>& grid, int i, int j, int curr_XOR) {
        if(i >= m || j >= n) return 0;

        curr_XOR ^= grid[i][j];

        if(i == m - 1 && j == n - 1) {
            return curr_XOR == target ? 1 : 0;
        }

        if(memo[i][j][curr_XOR] != -1) {
            return memo[i][j][curr_XOR];
        }

        long long paths = 0;
        paths = (paths + dfs(grid, i + 1, j, curr_XOR)) % MOD;
        paths = (paths + dfs(grid, i, j + 1, curr_XOR)) % MOD;

        return memo[i][j][curr_XOR] = paths;
    }
public:
    int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        target = k;
        memo.resize(m, vector<vector<int>>(n, vector<int>(16, -1)));
        return dfs(grid, 0, 0, 0);
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	Solution sol;
	vector<vector<int>> grid = {{2, 1, 5}, {7, 10, 0}, {12, 6, 4}};
	int k = 11;
	cout << sol.countPathsWithXorValue(grid, k);    
    return 0;
}
    