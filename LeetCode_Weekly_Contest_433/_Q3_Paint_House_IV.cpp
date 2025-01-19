#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCost(int n, vector<vector<int>>& cost) {
        long long ans = LLONG_MAX;
        vector<int> colors(n, -1);
        vector<vector<int>> zalvoritha = cost;
        
        vector<array<pair<int,int>,3>> best(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 3; j++) {
                best[i][j] = {cost[i][j], j};
            }
            sort(best[i].begin(), best[i].end());
        }
        
        vector<int> leftPath;
        function<void(int,int,long long)> solve = [&](int pos, int prevColor, long long totalCost) {
            if(totalCost >= ans) return;
            if(pos == n/2) {
                int temp_pos = n-1;
                long long temp_cost = totalCost;
                vector<int> rightColors(n/2, -1);
                
                for(int i = leftPath.size()-1; i >= 0; i--) {
                    bool found = false;
                    for(auto& [c, color] : best[temp_pos]) {
                        if(color != leftPath[i] && 
                           (temp_pos == n-1 || rightColors[n-1-temp_pos] != color)) {
                            rightColors[n-1-temp_pos] = color;
                            temp_cost += c;
                            found = true;
                            break;
                        }
                    }
                    if(!found) return;
                    temp_pos--;
                }
                ans = min(ans, temp_cost);
                return;
            }
            
            for(auto& [c, color] : best[pos]) {
                if(color != prevColor) {
                    leftPath.push_back(color);
                    colors[pos] = color;
                    solve(pos+1, color, totalCost + c);
                    leftPath.pop_back();
                }
            }
        };
        
        solve(0, -1, 0);
        return ans == LLONG_MAX ? -1 : ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int r; cin >> r;
    vector<vector<int>> grid;
    vector<int> row;
    int val;
    while (true) {
        cin >> val;
        row.push_back(val);
        if (cin.get() == '\n') break;
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
    cout << sol.minCost(r, grid) << '\n';
    return 0;
}

