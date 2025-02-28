#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is(ll x) {
    if(x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

void solve() {
    int n; 
    cin >> n;
    ll tot = (ll)n * (n + 1) / 2;
    if(n == 1 || is(tot)){
        cout << -1 << "\n";
        return;
    }
    set<int> av;
    for (int i = 1; i <= n; i++){
        av.insert(i);
    }
    ll s = 0; 
    vector<int> ans;
    ans.reserve(n);
    for (int i = 0; i < n; i++){
        ll bb = (ll)floor(sqrt((long double)s));
        ll nn = (bb + 1) * (bb + 1);
        ll ff = nn - s; 
        auto it = av.begin();
        if(it != av.end() && *it == ff){
            auto it2 = it; 
            it2++;
            if(it2 == av.end()){
                ans.clear();
                break;
            }
            int cc = *it2;
            ans.push_back(cc);
            av.erase(it2);
            s += cc;
        } else {
            int cc = *it;
            ans.push_back(cc);
            av.erase(it);
            s += cc;
        }
    } 
    if((int)ans.size() != n) cout << -1 << "\n";
    else {
        for(auto i : ans) cout << i << " ";
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

