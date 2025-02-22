#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;    
    stack<char> st;
    for (char c : s) {
        if (!st.empty()) {
            char top = st.top();
            if ((top == '(' && c == ')') || (top == '[' && c == ']') || (top == '<' && c == '>')) {
                st.pop();
                continue;
            }
        }
        st.push(c);
    }
    
    if (st.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

