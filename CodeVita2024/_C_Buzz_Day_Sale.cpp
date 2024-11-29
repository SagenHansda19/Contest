#include <bits/stdc++.h>
using namespace std;

void solve() {
    int itemCount;
    cin >> itemCount;
    
    vector<int> itemIds(itemCount), itemCosts(itemCount);
    for (int i = 0; i < itemCount; i++) cin >> itemIds[i];
    for (int i = 0; i < itemCount; i++) cin >> itemCosts[i];

    int availableAmount;
    cin >> availableAmount;

    int maxItems = 0, maxValue = 0;

    for (int i = 0; i < itemCount; i++) {
        int itemCost = itemCosts[i];
        int maxQuantity = availableAmount / itemCost;

        if (maxQuantity > 0) {
            int freeItems = 0;
            int freeValue = 0;

            for (int j = 0; j < itemCount; j++) {
                if (i != j && itemIds[i] % itemIds[j] == 0) {
                    freeItems += maxQuantity;
                    freeValue += itemCosts[j] * maxQuantity;
                }
            }

            if (freeItems > maxItems || 
               (freeItems == maxItems && freeValue > maxValue)) {
                maxItems = freeItems;
                maxValue = freeValue;
            }
        }
    }

    cout << maxItems << " " << maxValue << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
