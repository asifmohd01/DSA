#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0, bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(prices[i], bestBuy);
    }
    return maxProfit;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
