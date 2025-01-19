#include <bits/stdc++.h>
using namespace std;
void solve() {
    int Q;
    cin >> Q;
    deque<pair<long long, long long>> snakes;
    long long shift = 0;
    for(int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        if(type == 1) {
            long long length;
            cin >> length;
            long long head = shift;
            if(!snakes.empty()) head = snakes.back().first + snakes.back().second;
            snakes.push_back({head, length});
        }
        else if(type == 2) {
            shift += snakes.front().second;
            snakes.pop_front();
        }
        else {
            int k;
            cin >> k;
            cout << snakes[k-1].first - shift << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
