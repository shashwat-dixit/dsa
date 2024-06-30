#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int l = 0;
        int r = 1; // Start r from the second element
        int max_profit = 0;

        while (r < prices.size()) {
            if (prices[r] < prices[l]) {
                l = r; // Update left pointer if current price is lower than previous
            } else {
                int profit = prices[r] - prices[l];
                max_profit = std::max(max_profit, profit);
            }
            r++;
        }

        return max_profit;
    }
};

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) // Check for empty input
            return 0;

        int minPrice = prices[0]; // Initialize the minimum price
        int maxProfit = 0; // Initialize the maximum profit

        for (int i = 1; i < prices.size(); ++i) {
            // Update minimum price
            minPrice = std::min(minPrice, prices[i]);

            // Update maximum profit if selling at current price yields higher profit
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
