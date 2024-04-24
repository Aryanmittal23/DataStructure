#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 0)
        return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 0; i < pricesSize; i++) {
        min_price = (prices[i] < min_price) ? prices[i] : min_price;
        max_profit = (prices[i] - min_price > max_profit) ? prices[i] - min_price : max_profit;
    }

    return max_profit;
}