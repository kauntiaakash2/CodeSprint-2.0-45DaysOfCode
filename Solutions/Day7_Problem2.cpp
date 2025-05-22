#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxProfitWithThreshold(const vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] > minPrice) {
            int profit = prices[i] - minPrice;
            if (profit >= 2) {
                maxProfit = max(maxProfit, profit);
            }
        } else {
            minPrice = prices[i];
        }
    }
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    cout << getMaxProfitWithThreshold(prices) << endl;

    return 0;
}