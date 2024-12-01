#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int k = 1;
        while (true) {
            int candidate = (1 << k) - 1;
            if (candidate >= n) {
                return candidate;
            }
            k++;
        }
        return -1;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	Solution sol;
	cout << sol.smallestNumber(n) << endl;    
    return 0;
}
    