#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> d;
    vector<map<int, int>> c;
    
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> f(k);
        map<int, int> m;
        for(int j = 0; j < k; j++) {
            cin >> f[j];
            m[f[j]]++;
        }
        d.push_back(f);
        c.push_back(m);
    }
    
    double a = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            double p = 0;
            for(const auto& [x, f1] : c[i]) {
                if(c[j].count(x)) {
                    int f2 = c[j][x];
                    p += (double)f1/d[i].size() * (double)f2/d[j].size();
                }
            }
            a = max(a, p);
        }
    }
    cout << fixed << setprecision(15) << a << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

