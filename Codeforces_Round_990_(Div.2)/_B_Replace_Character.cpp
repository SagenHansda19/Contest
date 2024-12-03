#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	unordered_map<char, int> freq;
	for(char c : s) freq[c]++;
	char maxChar = s[0];
    char minFreqChar = 0;
    int minFreq = INT_MAX;
	for (const auto& [k, v] : freq) {
        if (v > freq[maxChar]) maxChar = k;
    }

	for (const auto& [k, v] : freq) {
        if (k != maxChar && v < minFreq) {
            minFreq = v;
            minFreqChar = k;
        }
    }

    if (!minFreqChar) minFreqChar = maxChar;
	for (char& c : s) {
        if (c == minFreqChar) {
            c = maxChar;
            break;
        }
    }
	cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
    